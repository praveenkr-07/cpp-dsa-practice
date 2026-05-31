#include <iostream>
using namespace std;
void display(int arr[], int n)
{
    // taking inputs
    cout << "Enter the elements of the Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // print array
    cout << "Array is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        
    }
    cout<<endl;
}
void find(int arr[], int lar, int slar, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > lar)
        {
            slar = lar;
            lar = arr[i];
            
        }
        else if (arr[i] < lar && arr[i] > slar)
        {
            slar = arr[i];
        }
    }
    cout << "Largest elemnet is " << lar << endl;
    cout << "Second Largest elemnet is " << slar << endl;
}

int main()
{
    int size, largest = INT16_MIN, secondlargest = INT16_MIN;
    cout << "Enter the size of the Array : ";
    cin >> size;
    int arr[size];
    display(arr, size);
    find(arr, largest, secondlargest, size);
}
