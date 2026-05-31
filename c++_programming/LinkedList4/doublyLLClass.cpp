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
class doublyLinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    doublyLinkedList()
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
            size++;
        }
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
            size++;
        }
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
            size++;
        }
    }
    void insertAtIdx(int idx, int val)
    {
        if (idx == 1)
        {
            insertAtHead(val);
            return;
        }
        if (idx == size + 1)
        {
            insertAtTail(val);
            return;
        }
        if (idx > size + 1 || idx <= 0)
        {
            cout << "Index is Out of Bound ? wrong indexing !!";
            return;
        }
        Node *temp = new Node(val);
        Node *help = head;
        int i = 1;
        while (i <= idx - 1)
        {
            i++;
            help = help->next;
        }
        temp->next = help->next;
        help->next = temp;
        temp->prev = help;
        temp->next->prev = temp;
        size++;
    }
    int deleteAtHead()
    {
        if (size == 0)
        {
            cout << "Deletion isn't possible ! List is Empty " << endl;
            return -1;
        }
        if (size == 1)
        {
            int ans = tail->val;
            delete head;
            head = tail = NULL;
            cout << "Deleted Element (from index 1) is : " << ans << endl;
            size--;
            return ans;
        }
        int ans = head->val;
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        cout << "Deleted Element (from Head) is : " << ans << endl;
        size--;
        return ans;
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
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        cout << "Deleted Element (from Tail) is : " << ans << endl;
        size--;
        return ans;
    }

    int deleteAtIdx(int idx)
    {
        if (size == 0)
        {
            cout << "Deletion isn't possible ! List is Empty " << endl;
            return -1;
        }
        else if (idx < 0 || idx > size)
        {
            cout << "Indexing Out of Bound ? wrong indexing !!";
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
            while (i <= idx - 1)
            {
                i++;
                help = help->next;
            }
            Node *toDelete = help->next;
            int ans = toDelete->val;
            help->next = toDelete->next;
            help->next->prev = help;
            cout << "Deleted Element (At Index " << idx << ") is : " << ans << endl;
            delete toDelete;
            size--;
            return ans;
        }
    }
    int getAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid index" << endl;
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            if (idx <= size / 2)
            {
                // cout<<"via Head"<<endl;
                Node *help = head;
                int i = 1;
                while (i <= idx - 1)
                {
                    i++;
                    help = help->next;
                }
                return help->val;
            }
            else
            {
                // cout<<"via Tail"<<endl;
                Node *help = tail;
                int i = size - 1;
                while (i >= idx + 1)
                {
                    i--;
                    help = help->prev;
                }
                return help->val;
            }
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
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
};
int main()
{
    doublyLinkedList LL;
    LL.insertAtTail(10);
    LL.insertAtTail(20);
    LL.insertAtTail(30);
    LL.insertAtTail(40);
    LL.insertAtTail(50);
    LL.display();
    cout << LL.getAtIdx(3);
    return 0;
}