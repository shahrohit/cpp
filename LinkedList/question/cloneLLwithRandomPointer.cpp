#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *random;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random = NULL;
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

Node *clone(Node *head, Node *tail)
{
    map<Node *, Node *> link;
    Node *temp = head;
    Node *ans = NULL;
    Node *ansTail = NULL;

    while (temp != NULL)
    {
        push(ans, ansTail, temp->data);
        link[temp] = ansTail;
        // cout << link[temp]->data << " ";
        temp = temp->next;
    }
    // print(ans);
    temp = head;
    Node *temp2 = ans;

    while (temp2 != NULL)
    {
        temp2->random = link[temp->random];
        temp = temp->next;
        temp2 = temp2->next;
    }

    return ans;
}
void printRandomValues(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->random->data << " ";
        temp = temp->next;
    }
}
int main()
{
    // first sorted LL
    Node *one, *two, *three, *four;
    Node *node1 = new Node(3);
    one = node1;

    // Node *node1 = new Node(4);
    Node *head1 = node1, *tail1 = node1;

    push(head1, tail1, 4);
    two = tail1;

    push(head1, tail1, 6);
    three = tail1;
    push(head1, tail1, 9);
    four = tail1;

    one->random = three;
    two->random = one;
    three->random = four;
    four->random = two;

    print(head1);
    Node *head2 = clone(head1, tail1);
    // cout << head2->random << endl;
    print(head2);
    printRandomValues(head2);
    return 0;
}