// we can print the reverse list easily
// if any node is given, we can traverse through entire list
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void display(Node *head, Node *tail)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;

    while (tail)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}  

// 10 20 30 40 50
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    b->prev = a;
    c->prev = b;
    d->prev = c;
    e->prev = d;

    display(a,e);
}