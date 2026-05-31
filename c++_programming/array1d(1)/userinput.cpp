#include <iostream>
using namespace std;
int main()
{
    int arr[5]; // Declaration and Intilialization
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i]; // user input
    }
    cout<<"Your array is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";// accessing element 
    }
    return 0;
}