#include <iostream>
#include <queue>
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

    // remove all the elements present at even indexed
    // position in a queue . consider 0 - based indexing
    int n = q.size();

    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        q.pop();
        if (i % 2 != 0) q.push(x);
    }
    display(q);
}