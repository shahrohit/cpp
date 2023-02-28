#include <iostream>
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
void divideLoop(Node *&head, Node *&head1, Node *&head2)
{
    Node *slow = head;
    Node *fast = head;

    head1 = head;

    while (1)
    {

        if (fast->next->next == head)
        {
            fast->next->next = NULL;
            break;
        }
        else if (fast->next == head)
        {
            fast->next = NULL;
            break;
        }
        fast = fast->next->next;
        slow = slow->next;
    }

    head2 = slow->next;
    slow->next = NULL;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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

    insertNode(tail, 6);
    insertNode(tail, 7);
    insertNode(tail, 8);
    // insertNode(tail, 9);

    tail->next = head;

    Node *head1 = NULL;
    Node *head2 = NULL;

    divideLoop(head, head1, head2);
    // cout << "head 1 : " << head1->data << " ";
    // cout << "head 2 :" << head2->data;

    print(head1);
    print(head2);
    return 0;
}