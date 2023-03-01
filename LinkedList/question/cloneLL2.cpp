#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *random;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }
};
void push(Node *&head, Node *&tail, int data)
{
    Node *node1 = new Node(data);
    if (tail == NULL)
    {
        tail = node1;
        head = tail;
        return;
    }

    tail->next = node1;
    tail = node1;
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

Node *cloneLL(Node *head, Node *tail)
{

    Node *temp = head;
    Node *ans = NULL;
    Node *ansTail = NULL;

    while (temp != NULL)
    {
        push(ans, ansTail, temp->data);

        temp = temp->next;
    }

    Node *originalNode = head;
    Node *cloneNode = ans;

    // adding clone node in between
    while (originalNode != NULL && cloneNode != NULL)
    {
        Node *next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = next;

        next = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = next;
    }

    // random pointer
    temp = head;
    while (temp != NULL)
    {
        if (temp->next != NULL)
        {
            temp->next->random = temp->random ? temp->random->next : temp->random;
        }
        temp = temp->next->next;
    }

    // revert changes

    originalNode = head;
    cloneNode = ans;
    while (originalNode != NULL && cloneNode != NULL)
    {
        originalNode->next = cloneNode->next;
        originalNode = originalNode->next;

        if (originalNode != NULL)
        {
            cloneNode->next = originalNode->next;
        }
        cloneNode = cloneNode->next;
    }

    // print(head);

    return ans;
}
void printRandomValues(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->random->data << " ";
        temp = temp->next;
    }
}
int main()
{
    // first sorted LL
    Node *one, *two, *three, *four, *five;
    Node *node1 = new Node(1);
    one = node1;

    // Node *node1 = new Node(4);
    Node *head1 = node1, *tail1 = node1;

    push(head1, tail1, 2);
    two = tail1;

    push(head1, tail1, 3);
    three = tail1;
    push(head1, tail1, 4);
    four = tail1;
    push(head1, tail1, 5);
    five = tail1;

    one->random = three;
    two->random = one;
    three->random = five;
    four->random = three;
    five->random = two;
    Node *head2 = cloneLL(head1, tail1);
    print(head2);
    printRandomValues(head2);
    return 0;
}