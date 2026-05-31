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
class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val)
    {
        if (idx > size + 1 || idx <= 0)
        {
            cout << "Index is Out of Bound ? wrong indexing !!";
            return;
        }
        else if (idx == 1)
        {
            insertAtHead(val);
            return;
        }
        Node *temp = new Node(val);
        Node *help = head;
        int i = 1;
        while (i < idx - 1)
        {
            i++;
            help = help->next;
        }
        temp->next = help->next;
        help->next = temp;
        size++;
    }

    int deleteAtTail()
    {
        if (size == 0)
        {
            cout << "Deletion isn't possible ! List is Empty " << endl;
            return -1;
        }
        int ans = tail->val;
        if (size == 1)
        {
            delete tail;
            head = tail = NULL;
            size = 0;
            cout << "Deleted Element (from Tail) is: " << ans << endl;
            return ans;
        }
        Node *help = head;
        while (help->next != tail)
        {
            help = help->next;
        }
        delete tail;
        tail = help;
        tail->next = NULL;
        cout << "Deleted Element (from Tail) is : " << ans << endl;
        size--;
        return ans;
    }
    int deleteAtHead()
    {
        if (size == 0)
        {
            cout << "Deletion isn't possible ! List is Empty " << endl;
            return -1;
        }
        int ans = head->val;
        if (size == 1)
        {
            delete head;
            head = tail = NULL;
            cout << "Deleted Element (from index 1) is : " << ans << endl;
            size--;
            return ans;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted Element (from Head) is : " << ans << endl;
        size--;
        return ans;
    }
    int deleteAtIdx(int idx)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Indexing Out of Bound ? wrong indexing !!";
            return -1;
        }
        else if (size == 0)
        {
            cout << "Deletion isn't possible ! List is Empty " << endl;
            return -1;
        }
        else if (idx == 1)
            return deleteAtHead();
        else if (idx == size)
            return deleteAtTail();

        else
        {
            Node *help = head;
            int i = 1;
            while (i < idx - 1)
            {
                i++;
                help = help->next;
            }
            Node *toDelete = help->next;
            int ans = toDelete->val;
            help->next = toDelete->next;
            cout << "Deleted Element (At Index " << idx << ") is : " << ans << endl;
            delete toDelete;
            size--;
            return ans;
        }
    }
    void display()
    {
        if(size==0) 
        {
            cout<<"List is Empty ";
            return ;
        }

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout<<endl;
    }
    bool isEmpty()
    {
        if (size == 0)
        {
            cout << "List is Empty" << endl;
            return 1;
        }
    }
    int Length()
    {
        cout << "Size of the list is " << size << endl;
        return size;
    }

    Node* copyList()
    {
        if(head==NULL) return NULL;

        Node * newHead = new Node(head->val);
        Node * tail = newHead;

        Node* temp = head->next;
        
        while(temp)
        {
            Node * newNode = new Node(temp->val);
            tail->next=newNode;
            tail=newNode;
            temp=temp->next;
        }
        return newHead;
    }
};
    
int main()
{
    LinkedList LL;
    LL.insertAtTail(10);
    LL.insertAtTail(20);
    LL.insertAtTail(30);
    LL.insertAtTail(40);
    LL.insertAtTail(50);
    LL.display(); 
    LL.insertAtIdx(5,60);
    LL.display(); 
    LL.deleteAtHead();
    LL.display();
    return 0;
}

