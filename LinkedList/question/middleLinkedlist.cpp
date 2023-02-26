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
int length(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
Node *getMiddle(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    else if (head->next->next == NULL)
    {
        return head->next;
    }

    Node *fast = head->next;
    Node *slow = head;

    while (fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }

    return slow;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    cout << "Enter 5 values :: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> val;
        insertAtTail(head, tail, val);
    }

    int mid = length(head) / 2 + 1;
    Node *temp = head;
    for (int i = 1; i < mid; i++)
    {
        temp = temp->next;
    }
    cout << "normal way: " << temp->data << endl;
    cout << "optimized : " << getMiddle(head)->data;
    return 0;
}