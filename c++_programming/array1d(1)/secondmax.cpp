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
    int max = INT8_MIN;
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    int smax = INT8_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != max && smax < arr[i])
            smax = arr[i];
    }

    cout << "Maximum element of the array is : ";
    cout << max;
    cout<<endl;
    cout << "Second Maximum element of the array is : ";
    cout << smax;
    return 0;
}