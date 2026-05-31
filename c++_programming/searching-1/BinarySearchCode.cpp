#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary_Search(vector<int> v, int target)
{
    int low = 0 ;
    int high = v.size() -1;
    while(low<=high)
    {
        int mid = low + ( high - low ) / 2 ;
        if(v[mid] == target) {
            cout<<"\ntarget is present";
            return 1;
        }
        else if(v[mid] > target) {
            high = mid - 1;
        }
        else //(v[mid] < target)
         {
           low = mid +1;
        }
    }
    cout<<"\ntarget is not present";
    return 0;
}
int main()
{
    int n  ;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter array elements : ";
    vector<int> v(n);
    for (int i = 0 ; i< n ; i++)
    {
        cin>>v[i];
        v.push_back(v[i]);
    }
    
    int target  ;
    cout<<"\nEnter target element  : ";
    cin>>target;

    cout<<"\nYour array is : ";
    for (int i = 0 ; i< n ; i++)
    {
        cout<<v[i]<<" ";
    }

    sort(v.begin() , v.end());
    binary_Search(v ,target);
    return 0;

}