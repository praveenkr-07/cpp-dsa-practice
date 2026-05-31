#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 7, 8}; // Declaration amd Intilialization
    int s = sizeof(arr) / (sizeof arr[1]);
    cout << "size of array is : " << s << endl;


    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " "; // accessing element}
    }
    cout << endl;
}