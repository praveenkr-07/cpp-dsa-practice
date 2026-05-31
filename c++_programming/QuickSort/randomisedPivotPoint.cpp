// #include <iostream>
// using namespace std;
// int partition(int arr[], int st, int end)
// {
//     int count = 0;
//     int pivot = arr[(st + end) / 2];
//     for (int i = st; i <= end; i++)
//     {
//         if (i == (st + end) / 2)
//             continue;
//         if (arr[i] <= pivot)
//             count++;
//     }

//     int pivotIndex = st + count;
//     swap(arr[(st + end) / 2], arr[pivotIndex]);
//     int i = st;
//     int j = end;
//     while (i < pivotIndex && j > pivotIndex)
//     {
//         if (arr[i] <= arr[pivotIndex])
//             i++;
//         else if (arr[j] > arr[pivotIndex])
//             j--;
//         else if (arr[i] > arr[pivotIndex] && arr[j] <= arr[pivotIndex])
//         {
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     }
//     return pivotIndex;
// }
// void quickSort(int arr[], int st, int end)
// {
//     // base condition
//     if (st >= end)
//         return;
//     // finding pivot
//     int pivotIdx = partition(arr, st, end);

//     // recursion
//     quickSort(arr, st, pivotIdx - 1);
//     quickSort(arr, pivotIdx + 1, end);
// }
// int main()
// {
//     int arr[] = {5, 1, 3, 0, 4, 9, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Sorting -> ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     quickSort(arr, 0, n - 1);
//     cout << "After  Sorting -> ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// // applications :
// // 1. internal sorting use variation of quick Sort
// // 2. quick select 
// // 3. whereever there is no need of stability , we use quick sort

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int partition(int arr[], int st, int end)
{
    // CHANGE: pick random index and swap to middle position
    int randIdx = st + rand() % (end - st + 1);
    swap(arr[randIdx], arr[(st + end) / 2]);

    // rest of your code is UNCHANGED
    int count = 0;
    int pivot = arr[(st + end) / 2];
    for (int i = st; i <= end; i++)
    {
        if (i == (st + end) / 2)
            continue;
        if (arr[i] <= pivot)
            count++;
    }

    int pivotIndex = st + count;
    swap(arr[(st + end) / 2], arr[pivotIndex]);
    int i = st;
    int j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        if (arr[i] <= arr[pivotIndex])
            i++;
        else if (arr[j] > arr[pivotIndex])
            j--;
        else if (arr[i] > arr[pivotIndex] && arr[j] <= arr[pivotIndex])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
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
    srand(time(0));  // seed random number generator

    int arr[] = {5, 3, 8, 1, 9, 2, 7, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "After sorting:  ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}