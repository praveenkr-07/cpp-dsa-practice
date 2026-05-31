// Use case of Selection Sort:
// - Good for small arrays or when memory writes are costly (minimizes swaps).
// - Useful in embedded systems or when simplicity is preferred over performance.
// - Cost of swapping
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {5, 4, 6, 3, 1, 2, 69, 96};
    cout << "Before Sorting array is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // selection sort (Unstable sort)
    //          Time complexity ->
    //                   1. Best case  :  O(n^2)
    //                   2. avg case   :  O(n^2)
    //                   3. worst case :  O(n^2)
    //
    //          Space complexity -> O(1)

    for (int i = 0; i < v.size() - 1; i++)
    {
        int min = INT16_MAX, idx = 0;
        for (int j = i; j < v.size(); j++)
        {
            if (v[j] < min)
            {
                min = v[j];
                idx = j;
            }
        }
        swap(v[i], v[idx]);
    }
    cout << "After Sorting array is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
