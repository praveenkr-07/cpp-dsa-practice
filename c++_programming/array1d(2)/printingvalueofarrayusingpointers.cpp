#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 2, 4, 7};
    int *ptr = arr;
    for (int i = 0; i < 5 ; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
    // after the loop there is no meaning of ptr as it does not pointing towards the array
    // therefore we should you this *ptr = arr;

    ptr = arr;
    ptr++; // to change the value at index 1
    *ptr = 100;
    ptr--;

    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}