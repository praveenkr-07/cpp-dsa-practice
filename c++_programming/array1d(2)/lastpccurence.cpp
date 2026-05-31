#include <iostream>
#include <vector>
using namespace std;
int lastoccurence(vector<int> v, int x)
{
    int n = -1;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == x)
    //     {
    //         n = i;
    //     }
    // }
    // cout << n;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            n = i;
            break;
        }
    }
    cout << n;
    return 0;
}
int main()
{
    int size, x;
    vector<int> vec;
    cout << "Enter the size of array : ";
    cin >> size;
    cout << endl;
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        int el;
        cin >> el;
        vec.push_back(el);
    }
    cout << "Enter the element that last occurence you want : ";
    cin >> x;
    cout << "Last occurence of " << x << " is : ";
    lastoccurence(vec, x);
    return 0;
}