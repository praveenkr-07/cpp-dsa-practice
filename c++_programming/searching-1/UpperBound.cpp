#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int UpperBound( vector<int>& v, int target) {
    int low = 0, high = v.size(), ans = v.size();
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] <= target)
            low = mid + 1;
        else
        {
            ans = mid;
            high = mid -1;
        }
            
    }
    return ans; 
}
int main() {
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
    int ans = UpperBound(v, target);
    cout << "Upper bound index: " << ans << ", value: " << v[ans] << "\n";
    return 0;
}
