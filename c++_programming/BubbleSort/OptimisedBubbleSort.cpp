#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {5, 4, 6, 3, 1, 2};
   
    // optimised Bubble Sort :(Stable sort)
    //          Time complexity ->
    //                   1. Best case : O(n)
    //                   2. avg case : O(n^2)
    //                   3. worst case : O(n^2)
    //
    //          Space complexity -> O(1)
        for (int i = 0; i < v.size() - 1; i++) // n-1 passes
        {
            bool flag = true;
            // traverse
            for (int j = 0; j < v.size() - 1 - i; j++)
            {
                if (v[j] > v[j + 1])
                {
                    int temp = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = temp;
                    flag = false;
                }
            }
            if (flag == true){ // in that iteration swap didn't happen => array is sorted 
                break;
            }                
        }
    
    for (int i = 0; i < v.size(); i++) // n-1 passes
    {
        cout << v[i] << " ";
    }
    return 0;
}
