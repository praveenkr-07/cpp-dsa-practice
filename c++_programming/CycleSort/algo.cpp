#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 3, 2, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int i = 0;
    while (i < n)
    {
        int correctIdx = arr[i] - 1;
        if (i == correctIdx)
            i++;
        else
            swap(arr[i], arr[correctIdx]);
    }
    cout << "After  Sorting -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
