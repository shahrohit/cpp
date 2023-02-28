#include <iostream>
#include <map>
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
void remove(Node *&head, Node *&tail)
{
    Node *temp = head;
    Node *next_next = NULL;

    while (temp != NULL)
    {
        Node *curr = temp;

        while (curr->next != NULL)
        {

            if (curr->next->data == temp->data)
            {
                next_next = curr->next->next;
                delete (curr->next);
                curr->next = next_next;
                if (curr->next == NULL)
                {
                    tail = curr;
                }
            }
            else
            {
                curr = curr->next;
            }
        }
        temp = temp->next;
    }
}
void remove2(Node *&head, Node *&tail, map<int, bool> &isRepeated)
{
    Node *temp = head;
    Node *next_next;
    isRepeated[temp->data] = true;
    while (temp->next != NULL)
    {
        if (isRepeated[temp->next->data])
        {
            next_next = temp->next->next;
            delete (temp->next);
            temp->next = next_next;
            if (temp->next == NULL)
            {
                tail = temp;
            }
        }

        else
        {
            isRepeated[temp->next->data] = true;
            temp = temp->next;
        }
    }
}

int main()
{
    Node *node1 = new Node(4);
    Node *head = node1, *tail = node1;

    push(head, tail, 4);
    push(head, tail, 2);
    push(head, tail, 1);
    push(head, tail, 4);
    push(head, tail, 2);
    push(head, tail, 8);
    push(head, tail, 1);
    push(head, tail, 2);
    push(head, tail, 4);
    // remove(head, tail);

    // print(head);

    // 2nd way

    map<int, bool> isRepeated;

    remove2(head, tail, isRepeated);
    print(head);

    cout << head->data << " " << tail->data;

    return 0;
}