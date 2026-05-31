#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &a, int st, int j)
{
    while(st<j)
    {
        swap(a[st] , a[j]);
        st++;
        j--;
    }
}
void display(vector<int> a, int size)
{
    cout << "array : ";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    vector<int> v;
    int n, a, b;
    cout << "Enter array size : ";
    cin >> n;
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    cout << "Enter k  : ";
    cin >> a;
    if(a>n) a %=n;
    display(v, n);
    reverse(v, 0, n-a-1);
    reverse(v, n-a, n-1);
    reverse(v, 0, n - 1);
    display(v, n);
    return 0;
}