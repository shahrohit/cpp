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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *start = new Node(data);
    if (head == NULL)
    {

        head = start;
        tail = start;
    }
    else
    {

        start->next = head;
        head->prev = start;
        head = start;
    }
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

void insertAtMiddle(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, data);
        return;
    }
    Node *mid = new Node(data);
    mid->prev = temp;
    mid->next = temp->next;
    temp->next = mid;
}

void deleteAtHead(Node *&head, Node *&tail)
{
    if (head->next == NULL)
    {
        // cout << "inside : " << head->data << endl;
        head = NULL;
        tail = NULL;
        return;
    }
    else
    {

        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
}
void deleteAtTail(Node *&tail, Node *&head)
{
    if (tail->prev == NULL)
    {
        tail = NULL;
        head = tail;
        return;
    }
    Node *temp = tail;

    temp->prev->next = NULL;
    tail = temp->prev;
    temp->prev = NULL;

    delete temp;
}
void deleteAtPos(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head, tail);
        return;
    }
    Node *curr = head;
    Node *prev = NULL;
    int count = 1;
    while (count < pos)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }

    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;
    if (prev->next == NULL)
    {
        tail = head;
    }

    delete curr;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Inserting at Head :: ";
    insertAtHead(head, tail, 10);
    print(head);
    // cout << "head :: " << head->data << "\tTail :: " << tail->data << endl;
    cout << "length :: " << getLength(head) << "\n\n";

    cout << "Inserting at tail :: ";
    insertAtTail(tail, head, 3);
    print(head);
    // cout << "head :: " << head->data << "\tTail :: " << tail->data << endl;
    cout << "length :: " << getLength(head) << "\n\n";

    cout << "Inserting at mid :: ";
    insertAtMiddle(head, tail, 2, 7);
    print(head);
    cout << "head :: " << head->data << "\tTail :: " << tail->data << endl;
    cout << "length :: " << getLength(head) << "\n\n";

    cout << "Inserting at mid / start:: ";
    insertAtMiddle(head, tail, 1, 8);
    print(head);
    cout << "head :: " << head->data << "\tTail :: " << tail->data << endl;
    cout << "length :: " << getLength(head) << "\n\n";

    cout << "Inserting at mid / end:: ";
    insertAtMiddle(head, tail, getLength(head) + 1, 4);
    print(head);
    cout << "head :: " << head->data << "\tTail :: " << tail->data << endl;
    cout << "length :: " << getLength(head) << "\n\n";

    cout << "deleting at head:: ";
    deleteAtHead(head, tail);
    print(head);
    cout << "head :: " << head->data << "\tTail :: " << tail->data << endl;
    cout << "length :: " << getLength(head) << "\n\n";

    cout << "deleting at tail:: ";
    deleteAtTail(tail, head);
    print(head);
    cout << "head :: " << head->data << "\tTail :: " << tail->data << endl;
    cout << "length :: " << getLength(head) << "\n\n";

    cout << "deleting at mid:: ";
    deleteAtPos(head, tail, 2);
    print(head);
    cout << "head :: " << head->data << "\tTail :: " << tail->data << endl;
    cout << "length :: " << getLength(head) << "\n\n";

    cout << "deleting at mid /start:: ";
    deleteAtPos(head, tail, 1);
    print(head);
    cout << "head :: " << head->data << "\tTail :: " << tail->data << endl;
    cout << "length :: " << getLength(head) << "\n\n";

    // cout << "Inserting at Head :: ";
    // insertAtHead(head, tail, 10);
    // print(head);
    // // cout << "head :: " << head->data << "\tTail :: " << tail->data << endl;
    // cout << "length :: " << getLength(head) << "\n\n";

    cout << "deleting at mid /end:: ";
    deleteAtPos(head, tail, getLength(head));
    print(head);
    cout << "head :: " << head << "\tTail :: " << tail << endl;
    cout << "length :: " << getLength(head) << "\n\n";
    /*
    cout << "my nodes  :: ";
    insertAtHead(head, tail, 3);
    // insertAtHead(head, tail, 5);
    // insertAtHead(head, tail, 6);
    print(head);
    cout << "head :: " << head->data << "\tTail :: " << tail->data << endl;
    cout << "length :: " << getLength(head) << "\n\n";

    // deleteAtHead(head, tail);
    // print(head);
    // cout << "head :: " << head->data << "\tTail :: " << tail->data << endl;
    // cout << "length :: " << getLength(head) << "\n\n";

    cout << " my node : ";
    deleteAtPos(head, tail, 1   );
    print(head);
    cout << "head :: " << head << "\tTail :: " << tail << endl;
    cout << "length :: " << getLength(head) << "\n\n";
    */
    return 0;
}