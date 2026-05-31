#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n]; // Declaration and Initialization
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int x ;
    cout<<"enter a value ; to check how many number are greater than that value in the array : ";
    cin>>x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(x<arr[i])
        count += 1;
    }
    cout << count;
    return 0;
}