#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

};

void insertAtEnd(Node* head , int val){
    Node* temp = new Node(val);
    while(head->next!=NULL) head=head->next;
    head->next=temp;
    temp=head;
}

Node* deleteByNode( Node* head ,Node* target) //
    {
        if(head == target)
        {
            int ans = head->val;
            head = head->next;
            cout<<"\nDeleted Node is "<<ans<<" "<<endl;
            return head;
        }
        Node* temp = head;
        while(temp->next != target) temp = temp->next;
        int ans = temp->next->val;
        temp->next = temp->next->next;
        cout<<"\nDeleted Node is "<<ans<<" "<<endl;
        return head;
    }
Node* deleteByVal(Node* head ,int target)
{
    if(head->val == target)
        {
            int ans = head->val;
            head = head->next;
            cout<<"\nDeleted Node is "<<ans<<" "<<endl;
            return head;
        }
        Node* temp = head;
        while(temp->next->val != target) temp = temp->next;
        int ans = temp->next->val;
        temp->next = temp->next->next;
        cout<<"\nDeleted Node is "<<ans<<" "<<endl;
        return head;
}
Node* copyList(Node* head)
    {
        if(head==NULL) return NULL; // base condition

        Node* newNode = new Node(-1) ;
        newNode->val = head->val;
        newNode->next = copyList(head->next); // recursive call

        return newNode;
    }
    void display( Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int sizeOfList( Node* head)
{
    int size = 0;
    Node* temp = head;
    while(temp!=NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}


int main()
{
    // 10 20 30 40
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    // Node b(20);
    // Node c(30);
    // Node d(40);
    // forming ll

    a->next = b;
    b->next = c;
    c->next = d;

    Node* head = a;
    display(head);
    cout<<endl;
    insertAtEnd(head,50);
    display(head);

}


