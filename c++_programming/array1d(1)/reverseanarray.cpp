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
    vector<int> v2;
    for (int i = n-1  ; i >= 0 ; i--)
    {
        v2.push_back(v[i]);
    }
    cout << "Reversed array : ";
    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}