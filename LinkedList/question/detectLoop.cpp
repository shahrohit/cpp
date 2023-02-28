#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertNode(Node *&tail, int data)
{
    // empty list
    // if (tail == NULL)
    // {
    //     Node *newNode = new Node(data);
    //     tail = newNode;
    //     newNode->next = newNode;
    // }
    // element present
    // else
    // {
    // }
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

bool isCircular(Node *&tail)
{
    Node *temp = tail;
    do
    {

        tail = tail->next;
        if (tail == NULL)
        {
            return false;
        }
    } while (tail != temp);

    return true;
}
Node *floydDetection(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL and fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {

            return slow;
        }
    }
    return NULL;
}
bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node *findNodeInersection(Node *&head)
{

    Node *slow = head;
    Node *intersection = floydDetection(head);
    if (head == NULL)
        return NULL;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return intersection;
}
void RemoveNodeInersection(Node *&head)
{

    Node *slow = head;
    Node *intersection = floydDetection(head);
    if (head == NULL)
        return;
    while (slow->next != intersection->next)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    intersection->next = NULL;
}
int main()
{
    Node *node1 = new Node(1);
    Node *tail = node1;
    Node *head = node1;
    insertNode(tail, 2);
    insertNode(tail, 3);
    insertNode(tail, 4);
    insertNode(tail, 5);
    Node *startTemp = tail;

    insertNode(tail, 7);
    insertNode(tail, 15);
    insertNode(tail, 11);
    insertNode(tail, 10);
    insertNode(tail, 9);
    tail->next = startTemp;
    // cout << findNodeInersection(head)->data << endl;

    // RemoveNodeInersection(head);

    cout << floydDetection(head)->data;

    return 0;
}
