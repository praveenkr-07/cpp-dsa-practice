#include <iostream>
#include <vector>
using namespace std;
int printIndex(vector<int> &v, int ele, int strt)
{
    if (strt >= v.size())
        return -1;
    else if (v[strt] == ele)
        return strt;
    return printIndex(v, ele, strt + 1);
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

    int ele;
    cout << "Enter the element you want to search : ";
    cin >> ele;
    cout << "Index of " << ele << " is " << printIndex(v, ele, 0);
}