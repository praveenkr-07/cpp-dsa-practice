// done on leet code
//  ques 75
//  dutch flag algorithm
#include <iostream>
#include <vector>
using namespace std;
void sort_0s_1s_2s_Array(vector<int> &v)
{
    int low = 0, mid = 0, high = v.size() - 1;
    while (mid <= high)
    {
        if (v[mid] == 2)
        {
            swap(v[high], v[mid]);
            high--;
        }
        if (v[mid] == 0)
        {
            swap(v[mid], v[low]);
            low++;
            mid++;
        }
        if (v[mid] == 1)
        {
            mid++;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of your array -> ";
    cin >> n;
    vector<int> v;
    cout << "Enter a (0,1,2) array -> ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "your array is -> ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort_0s_1s_2s_Array(v);
    cout << "After sorting your array is -> ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}