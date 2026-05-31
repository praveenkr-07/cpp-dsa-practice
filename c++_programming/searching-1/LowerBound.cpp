#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int LowerBound(vector<int> &v, int target)
{
    int low = 0;
    int high = v.size() - 1;
    int ans = high + 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if(v[mid]>=target)
        {
            ans=mid;
            high=mid -1;
        }
        
        else low = mid +1;
    }
        
        return ans;
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
    int target;
    cout << "\nEnter target element  : ";
    cin >> target;

    cout << "\nYour array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    int ans =LowerBound(v, target);
    cout << "Lower bound index: " << ans << ", value at Lower bound index : " << v[ans] << "\n";
    return 0;
}