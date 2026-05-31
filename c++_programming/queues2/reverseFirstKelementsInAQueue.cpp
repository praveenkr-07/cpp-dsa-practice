#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue<int> &q)
{
    int n = q.size();
    for (int i = 1; i <= n; i++)
    {
        int x = q.front();
        q.pop();
        cout << x << " ";
        q.push(x);
    }
    cout << endl;
}
void reverseFirstKelements(queue<int> &q, int k)
{
    int n = q.size();
    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i < n - k; i++)
    {
        int x = q.front();
        q.pop();
        q.push(x);
    }
}
int main()
{
    queue<int> q;
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
    display(q);
    reverseFirstKelements(q, 3);
    display(q);
}