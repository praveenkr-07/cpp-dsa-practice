#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n]; // Declaration and Initialization
    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i]; 
    }
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" "; 
    }
    cout<<endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}