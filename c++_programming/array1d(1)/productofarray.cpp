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
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod*=arr[i];
    }
    cout<<prod;
    return 0;
}