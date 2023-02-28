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
Node *removeDuplicates(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        // cout << "temp->next->data : " << temp->next->data << "\t temp->data" << temp->data << endl;
        if ((temp->next != NULL) && (temp->next->data == temp->data))
        {
            Node *next_next = temp->next->next;
            delete (temp->next);
            temp->next = next_next;
        }
        else
        {
            temp = temp->next;
            // toDelete = toDelete->next;
        }
    }
    return head;
}
int main()
{
    // Node *node1 = new Node(1);
    Node *head = NULL;
    Node *tail = NULL;

    push(head, tail, 2);
    push(head, tail, 2);
    push(head, tail, 3);
    push(head, tail, 3);
    push(head, tail, 3);
    push(head, tail, 3);
    push(head, tail, 4);
    push(head, tail, 4);

    // head = removeDuplicates(head);

    print(head);

    return 0;
}