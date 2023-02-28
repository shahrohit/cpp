#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free hogaya" << val << endl;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << "\t";

        temp = temp->next;
    }
    cout << endl;
}
void insertAtTail(Node *&tail, Node *&head, int data)
{
    Node *end = new Node(data);
    if (tail == NULL)
    {
        tail = end;
        head = end;
    }
    else
    {
        tail->next = end;
        end->prev = tail;
        tail = end;
    }
}
Node *Reverse(Node *node)
{
    // If empty list, return
    if (!node)
        return NULL;

    // Otherwise, swap the next and prev
    // Node *temp = node->next;
    // node->next = node->prev;
    // node->prev = temp;
    swap(node->next, node->prev);

    // If the prev is now NULL, the list
    // has been fully reversed
    if (!node->prev)
        return node;

    // Otherwise, keep going
    return Reverse(node->prev);
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(tail, head, 3);
    insertAtTail(tail, head, 4);
    insertAtTail(tail, head, 5);
    insertAtTail(tail, head, 6);
    insertAtTail(tail, head, 9);
    head = Reverse(head);
    print(head);

    return 0;
}