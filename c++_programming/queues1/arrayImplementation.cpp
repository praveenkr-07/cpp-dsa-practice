#include <iostream>
#include <vector>
using namespace std;
class Queue
{
public:
    int fron;
    int back;
    vector<int> arr;
    Queue(int val)
    {
        fron = 0;
        back = 0;
        vector<int> v(val);
        arr = v;
    }
    void push(int val)
    {
        if (back == arr.size())
        {
            cout << "Queue is FULL!!!" << endl;
            return;
        }
        arr[back] = val;
        back++;
    }
    void pop()
    {
        if (fron - back == 0)
        {
            cout << "Queue is EMPTY!!!" << endl;
            return;
        }
        fron++;
    }
    int front()
    {
        if (fron - back == 0)
        {
            cout << "Queue is EMPTY!!!" << endl;
            return -1;
        }
        return arr[fron];
    }
    int Back()
    {
        if (fron - back == 0)
        {
            cout << "Queue is EMPTY!!!" << endl;
            return -1;
        }
        return arr[back - 1];
    }
    int size()
    {
        return back - fron;
    }
    bool empty()
    {
        if (fron - back == 0)
            return true;
        return false;
    }
    void display()
    {
        int n = back - fron;
        if (n == 0)
        {
            cout << "Queue is EMPTY!!!" << endl;
            return;
        }
        for (int i = fron; i < back; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Queue q(10);
    cout << q.Back() << endl;
    cout << q.front() << endl;
    cout << q.size() << endl;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.display();
    cout << q.size() << endl;
    q.pop();
    q.display();
    cout << q.size() << endl;
    cout << q.Back() << endl;
    cout << q.front() << endl;
}
// here there is the wastage of space 
// this can be solved using circular queues
