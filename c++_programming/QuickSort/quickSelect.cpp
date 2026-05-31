#include <iostream>
using namespace std;
int partition(int arr[], int st, int end)
{
    int pivot = arr[st];
    int count = 0;
    for (int i = st + 1; i <= end; i++)
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
int Kthsmallest(int arr[], int st, int end, int k)
{
    int pivotIdx = partition(arr, st, end);
    if (k == pivotIdx + 1)
        return arr[pivotIdx];
    else if (pivotIdx + 1 < k)
        return Kthsmallest(arr, pivotIdx + 1, end, k);
    else
        return Kthsmallest(arr, st, pivotIdx - 1, k);
}
int main()
{
    //-7 -3 5 6 8 10 20 44
    int arr[] = {5, 10, 8, 20, -7, 6, -3, 44};
    int n = sizeof(arr) / sizeof(arr[0]);
    int kthSmallest = 2;
    int Kthlargest = n-kthSmallest +1;
    cout<<Kthsmallest(arr, 0, n - 1, kthSmallest);
    cout<<endl;
    cout<< Kthsmallest(arr, 0, n - 1, Kthlargest);
}