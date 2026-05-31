#include <iostream>
#include <queue>
#include<stack>
using namespace std;
void display( queue<int> &q){
    int n = q.size();
    for(int i = 1 ; i<=n ;i++)
    {
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);
    }
    cout<<endl;
}
void reverseQueueByStack(queue<int> &q)
{
    stack<int> st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
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
    display(q);
    reverseQueueByStack(q);
    display(q);
}