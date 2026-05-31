#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int partition(int arr[], int st, int end)
{
    int pivot = arr[st];
    int count = 0;
    for (int i = st + 1 ; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIdx = count + st;
    swap(arr[st], arr[pivotIdx]);

    int i = st;
    int j = end;
    while (i < pivotIdx && j > pivotIdx)
    {
        if (arr[i] <= pivot)
            i++;
        if (arr[j] > pivot)
            j--;
        else if (arr[i] > pivot && arr[j] <= pivot)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quickSort(int arr[], int st, int end)
{
    if (st >= end)
        return;
    int pivotIdx = partition(arr, st, end);

    quickSort(arr, st, pivotIdx - 1);
    quickSort(arr, pivotIdx + 1, end);
}
int main()
{
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting -> ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    
    quickSort(arr, 0, n - 1);

    cout << "\nAfter  Sorting -> ";
    for (int i : arr)
    {
        cout << i << " ";
    }
}
