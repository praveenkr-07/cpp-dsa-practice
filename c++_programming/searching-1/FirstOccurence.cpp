#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int FirstOccurence(vector<int> &v, int target)
{
    int ans = -1;
    int low = 0;
    int high = v.size() - 1;
    bool flag = false;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if(v[mid]<target)
        {
            low = mid+1;
        }
        else // (v[mid]>=target)
        {
            ans = mid;
            high = mid -1;
            if(v[mid]==target) flag = true;
        }
    }
    if (flag == false)
    {
        cout << "\nelement is not present ";
        return -1;
    }
    else return ans ;
}

int FirstOccurence_No_flag(vector<int> &v, int target)
{
    int ans = -1;
    int low = 0;
    int high = v.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if(v[mid]<target)
        {
            low = mid+1;
        }
        else if(v[mid]>target)
        {
            high = mid -1;
        }
        else 
        {
            ans = mid;
            high = mid -1;
        }
    }
    return ans ;
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
    int ans = FirstOccurence(v, target);
    if(ans != -1)
    {cout<<"First index of "<<target<<" is "<<ans;}
    return 0;
}