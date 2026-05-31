#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;
    int n;
    cout << "Enter array size : ";
    cin >> n;
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        int j = n - 1 - i;
        v2[i] = v[j];
    }
    cout << "Reversed array : ";
    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}