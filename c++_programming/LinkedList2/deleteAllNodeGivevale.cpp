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
            size++;
        }
        else
        {
            tail->next = temp;
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
        if (idx > size + 1 || idx <= 0)
        {
            cout << "Index is Out of Bound ? wrong indexing !!";
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
        delete temp;
        cout << "Deleted Element (from Head) is : " << ans << endl;
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
            isEmpty();
        }
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
    void deleteNodeByValue(int del_Val){
    while(head != NULL && head->val == del_Val){
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    
    Node* temp = head;
    while(temp != NULL && temp->next != NULL){
        if(temp->next->val == del_Val){
            Node* toDelete = temp->next;
            temp->next = toDelete->next;
            delete toDelete;
            size--;
        }
        else{
            temp = temp->next;
        }
    }
}
int lengthOfCycle()
{
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) break;
    }
    slow=slow->next;
    int i = 1;
    while(fast!=slow)
    {
        i++;
        slow=slow->next;
    }
    return i;
}

};

int main()
{
    LinkedList LL;
    LL.insertAtTail(70);
    LL.insertAtTail(90);
    LL.insertAtTail(60);
    LL.insertAtTail(60);
    LL.insertAtTail(70);
    LL.insertAtTail(80);
    LL.insertAtTail(30);
    LL.insertAtTail(0);
    LL.insertAtTail(90);
    LL.insertAtTail(50);
    LL.display();
    LL.deleteNodeByValue(70);
    LL.display();


    // LL.Length();
    // LL.insertAtIdx(3, 25);

    // LL.display();
    // LL.Length();
    // LL.deleteAtIdx(3);
    // LL.display();
    // LL.Length();
    return 0;
}