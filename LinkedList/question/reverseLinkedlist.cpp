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
Node *reverseLinkedList(Node *&head)
{
    // if list is null or constains only one node
    if (head == NULL || head->next == NULL)
        return head;
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
Node *reverseRecursion(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *chotaHead = reverseRecursion(head->next);
    head->next->next = head;
    head->next = NULL;

    return chotaHead;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    cout << "Enter 5 values :: ";
    for (int i = 0; i < 1; i++)
    {
        cin >> val;
        insertAtTail(head, tail, val);
    }

    print(head);

    head = reverseRecursion(head);
    print(head);
    return 0;
}