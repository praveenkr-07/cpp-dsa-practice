#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {13,12,3,-4};
    cout << "Before Sorting array is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Insertion Sort :(Stable sort)
    //          Time complexity ->
    //                   1. Best case : O(n)
    //                   2. avg case : O(n^2)
    //                   3. worst case : O(n^2)
    //                   
    //          Space complexity -> O(1)
    for (int i = 1; i < v.size(); i++)
    {
        int j = i;
        while (j >= 1)
        {
            if (v[j] >= v[j - 1])
                break;
            else if (v[j] < v[j - 1])
            {
                swap(v[j], v[j - 1]);
            }
            j--;
        } 
    }
    cout << "After Sorting array is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
