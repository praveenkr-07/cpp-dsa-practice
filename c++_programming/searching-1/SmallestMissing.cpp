#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void SmallestMissing(vector<int> &v)
{
    int low = 0;
    int high = v.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (v[mid] == mid)
        {
            low = mid + 1;
        }

        else //(v[mid] != mid) <=> (v[mid] > mid) because (v[mid] < mid) never ever possible
        {
            ans = mid;
            high = mid - 1;
        }
    }
    if (ans != -1)
    {
        cout << "\nFirst smallest missing element is : " << ans;
    }
    else 
    cout <<"\nFirst smallest missing element is : " << v[0];
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "\nEnter array elements : ";
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "\nYour array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    SmallestMissing(v);
    return 0;
}