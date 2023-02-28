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
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *end = new Node(data);
    if (tail == NULL)
    {
        tail = end;
        head = tail;
        return;
    }
    tail->next = end;
    tail = end;
}
void print(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *kReverse(Node *&head, int k)
{
    // if list is null or constains only one node
    if (head == NULL)
        return head;

    // step 1 : reverse 1st step
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // step 2:
    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }
    return prev;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    cout << "Enter 5 values :: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> val;
        insertAtTail(head, tail, val);
    }

    print(head);

    head = kReverse(head, 3);
    print(head);
    return 0;
}