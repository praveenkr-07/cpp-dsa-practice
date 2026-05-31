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
        cin >> arr[i]; // accessing element
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // accessing element
    }
    cout << endl;
    int el;
    cout << "Enter the element to find : ";
    cin >> el;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "element found";
    }
    else
        cout << "element not found";
    return 0;
}