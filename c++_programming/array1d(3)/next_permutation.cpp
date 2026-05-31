/*
first test case :
Input: [1, 2, 3, 4]
Output: [1, 2, 4, 3]

second test case :
Input: [1, 2, 3]
Output: [1, 3, 2]
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reversePart(vector<int> &v, int start, int end)
{
    while (start < end)
    {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}
void nextPermutation(vector<int> &result)
{
    int idx = -1;
    int n = result.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (result[i] < result[i + 1])
        {
            idx = i;
            break;
        }
    }
    reversePart(result, idx + 1, n - 1);
    int j = 0;
    for (int i = idx + 1 ; i < n  ; i++)
    {
        if (result[idx] < result[i])
        {
            j = i;
            break;
        }
    }

    swap(result[idx], result[j]);
    
}

int main()
{
    int size, sum;
    vector<int> vec;
    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        int el;
        cin >> el;
        vec.push_back(el);
    }
    nextPermutation(vec);
    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}