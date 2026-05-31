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
    int *ptr = arr; // int *ptr = &arr[0];
    cout<<ptr <<" "<< &arr[0]<<endl;
    cout<<ptr[0]<<endl;
    return 0;
}