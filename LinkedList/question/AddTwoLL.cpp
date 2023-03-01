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
Node *add(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    int num1 = 0;
    int num2 = 0;
    Node *ans = NULL;
    while (temp1 != NULL)
    {
        num1 = num1 * 10 + temp1->data;
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        num2 = num2 * 10 + temp2->data;
        temp2 = temp2->next;
    }
    int num = num1 + num2;

    while (num != 0)
    {
        Node *temp = new Node(num % 10);
        temp->next = ans;
        ans = temp;
        num /= 10;
    }
    return ans;
}
int main()
{
    // first sorted LL
    Node *node1 = new Node(3);
    // Node *node1 = new Node(4);
    Node *head1 = node1, *tail1 = node1;

    push(head1, tail1, 4);
    // push(head1, tail1, 6);
    // push(head1, tail1, 9);
    // push(head1, tail1, 10);

    // print(head1);

    // second sorted LL
    Node *node2 = new Node(2);
    Node *head2 = node2, *tail2 = node2;

    push(head2, tail2, 3);
    push(head2, tail2, 0);

    // print(head2);

    Node *ans = add(head1, head2);
    print(ans);
    return 0;
}