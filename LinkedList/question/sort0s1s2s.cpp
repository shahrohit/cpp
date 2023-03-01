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
void push(Node *&tail, int data)
{
    Node *temp = new Node(data);

    tail->next = temp;
    tail = temp;
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
// sort by changing the values.
void sort(Node *&head)
{
    int zero = 0, one = 0, two = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
            zero++;
        else if (temp->data == 1)
            one++;
        else
            two++;

        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (zero > 0)
        {
            temp->data = 0;
            zero--;
        }
        else if (one > 0)
        {
            temp->data = 1;
            one--;
        }
        else
        {
            temp->data = 2;
            two--;
        }
        temp = temp->next;
    }
}
void insert(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}

// changing links
void sort2(Node *&head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twotail = twoHead;

    Node *curr = head;

    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            insert(zeroTail, curr);
        }
        else if (value == 1)
        {
            insert(oneTail, curr);
        }
        else if (value == 2)
        {
            insert(twotail, curr);
        }
        curr = curr->next;
    }
    if (oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {

        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twotail->next = NULL;

    head = zeroHead->next;

    delete zeroHead, oneHead, twoHead;
}
int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    push(tail, 0);
    push(tail, 0);
    push(tail, 2);
    push(tail, 1);
    push(tail, 0);
    push(tail, 2);
    push(tail, 2);
    push(tail, 1);

    print(head);
    sort2(head);
    print(head);
    return 0;
}