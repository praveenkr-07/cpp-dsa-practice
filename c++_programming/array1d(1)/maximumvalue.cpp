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
    int max = arr[0];
    for (int i = 1 ; i < n ; i++){
        if(max < arr[i]) max = arr[i];
    }
    cout<<"Maximum element of the array is : ";
    cout<<max;
    return 0;
}