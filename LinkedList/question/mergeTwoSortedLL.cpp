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
Node *sortTwoLL(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    Node *head = NULL;
    Node *tail = NULL;
    Node *curr = head;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            push(head, tail, temp1->data);
            temp1 = temp1->next;
        }
        else
        {
            push(head, tail, temp2->data);
            temp2 = temp2->next;
        }
    }

    while (temp1 != NULL)
    {
        push(head, tail, temp1->data);
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        push(head, tail, temp2->data);
        temp2 = temp2->next;
    }

    return head;
}

Node *sortTwoLL2(Node *&head1, Node *&head2)
{
    Node *temp1 = head2;

    Node *prev = head1;
    Node *curr = head1->next;

    while (temp1 != NULL)
    {
        if (temp1->data >= prev->data && temp1->data <= curr->data)
        {
            // insertBetween();
            prev = curr;
        }
        else if (temp1->data < prev->data)
        {
            // insertFront();
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }

    return NULL;
}
int main()
{
    // first sorted LL
    Node *node1 = new Node(3);
    Node *head1 = node1, *tail1 = node1;

    push(head1, tail1, 5);
    push(head1, tail1, 6);
    push(head1, tail1, 9);
    push(head1, tail1, 10);

    print(head1);

    // second sorted LL
    Node *node2 = new Node(1);
    Node *head2 = node2, *tail2 = node2;

    push(head2, tail2, 2);
    push(head2, tail2, 4);
    push(head2, tail2, 6);
    push(head2, tail2, 8);

    print(head2);

    Node *head = sortTwoLL(head1, head2);
    print(head);

    return 0;
}