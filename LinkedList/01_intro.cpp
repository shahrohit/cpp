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
void insertAtHead(Node *&head, int data)
{
    Node *start = new Node(data);
    start->next = head;
    head = start;
}
void insertAtTail(Node *&tail, int data)
{
    Node *end = new Node(data);
    tail->next = end;
    tail = end;
}
int length(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtMiddle(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *middle = new Node(data);
    middle->next = temp->next;
    temp->next = middle;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteAtHead(Node *&head)
{
    Node *temp = head;
    head = temp->next;
    delete temp;
}
void deleteAtEnd(Node *&head, Node *&tail)
{
    Node *end = head;
    while (end->next)
    {
        tail = end;
        end = end->next;
    }
    tail->next = NULL;

    delete end;
}
void deleteAtMiddle(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    Node *prev = head;
    Node *curr = head;
    int count = 1;

    while (count < pos)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if (curr->next == NULL)
    {
        tail = prev;
        // cout << tail->data;
    }

    prev->next = curr->next;
    delete curr;
}
int main()
{
    Node *node1 = new Node(5);

    Node *head = node1;
    Node *tail = node1;

    cout << "Initial node : ";
    print(head);

    insertAtHead(head, 12);
    cout << "Inserting at start : ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    insertAtTail(tail, 2);
    cout << "Inserting at end : ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    insertAtHead(head, 3);
    cout << "Inserting at start : ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    insertAtHead(head, 8);
    cout << "Inserting at start : ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    insertAtTail(tail, -2);
    cout << "Inserting at end : ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    insertAtMiddle(head, tail, 2, 20);
    cout << "Inserting at middle : ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    insertAtMiddle(head, tail, 1, -3);
    cout << "Inserting at middle /start : ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    insertAtMiddle(head, tail, length(head) + 1, 4);
    cout << "Inserting at middle /end : ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    deleteAtHead(head);
    cout << "deleting at start : ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    deleteAtEnd(head, tail);
    cout << "deleting at end : ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    deleteAtMiddle(head, tail, 3);
    cout << "deleting at middle : ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    deleteAtMiddle(head, tail, 1);
    cout << "deleting at middle / start : ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    deleteAtMiddle(head, tail, length(head));
    cout << "deleting at middle / end: ";
    print(head);
    cout << "head : " << head->data << " ";
    cout << "tail : " << tail->data << "\n\n";

    return 0;
}