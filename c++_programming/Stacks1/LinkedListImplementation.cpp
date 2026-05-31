#include <iostream>
using namespace std;
class Node
{ // user defined data type
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Stack
{// user defined data structure
public:
    Node* head;
    int size;

    Stack(){
        head = NULL;
        size = 0;
    }

    void push(int x)
    {
        Node* temp = new Node(x);
        temp->next=head;
        head=temp;
        size++;
    }
    int top()
    {
        if (head==NULL)
        {
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        else
        {
            return head->val;
        }
    }
    int pop()
    {
        if (head==NULL)
        {
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        else 
        {
            Node * temp = head;
            int ans = head->val;
            head=head->next;
            delete temp;
            size--;
            return ans;
        }
    }
    void display()
    {
        cout << "Element of the stack : ";
        Node* temp = head;
        while(temp)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout << endl;
    }
    int Length()
    {
        return (size);
    }
    bool isEmpty()
    {
        if (head==NULL)
            return true;
        else
            return false;
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout<<st.Length()<<endl;
    st.display();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Length()<<endl;
    st.display();
}


// linked list implementaion is
// better than array implementaion
// in term of size
