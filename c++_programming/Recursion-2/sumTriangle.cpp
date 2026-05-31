#include <iostream>
#include <vector>
using namespace std;
void sumTriangle(vector<int> &v)
{
    int n = v.size();
    if (n == 1)
        return;
    vector<int> nextVec(n - 1);
    for (int i = 0; i < nextVec.size(); i++)
    {
        nextVec[i] = v[i] + v[i + 1];
    }

    cout << "[ ";
    for (int i = 0; i < nextVec.size(); i++)
    {
        cout << nextVec[i] << " ";
    }
    cout << "]";
    cout << endl;

    sumTriangle(nextVec);
}
int main()
{
    int n;
    cout << "Enter the size of your vector : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements of vector : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }
    cout << "[ ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "]";
    cout << endl;
    sumTriangle(v);
}