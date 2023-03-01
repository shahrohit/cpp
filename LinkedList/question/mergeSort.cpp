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
Node *merge(Node *&head1, Node *&head2)
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

Node *findMid(Node *&head)
{
    Node *fast = head->next;
    Node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node *mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // finding the mid Node
    Node *mid = findMid(head);

    Node *left = head;       // left part of LL
    Node *right = mid->next; // right of LL
    mid->next = NULL;

    // recursive call to sort the both halves
    left = mergeSort(left);
    right = mergeSort(right);

    // merge two halves

    Node *ans = merge(left, right);

    return ans;
}
int main()
{
    // first sorted LL
    Node *node = new Node(3);
    Node *head = node, *tail = node;

    push(head, tail, 1);
    push(head, tail, 6);
    push(head, tail, 5);
    push(head, tail, 2);
    push(head, tail, 0);
    push(head, tail, 7);
    push(head, tail, 2);
    push(head, tail, 4);

    print(head);

    Node *ans = mergeSort(head);
    print(ans);

    return 0;
}