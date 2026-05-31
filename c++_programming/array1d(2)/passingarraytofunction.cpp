#include <iostream>
using namespace std;
void display(int a[], int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}
void change(int b[], int size)
{
    b[0] = 100;
}
int main()
{
    int arr[] = {1, 4, 2, 4, 7};
    // int* ptr = arr;
    // int *ptr = &arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size); // 1   4 2 4 7
    change(arr, size);
    display(arr, size); // 100 4 2 4 7 --> passing arrays to function is pass by refrence
    return 0;
}