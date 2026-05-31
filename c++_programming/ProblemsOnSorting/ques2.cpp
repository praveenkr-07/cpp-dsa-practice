#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of your array : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements in your array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v.push_back(v[i]);
    }
    cout << " Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    int x = 1;
    vector<int> isvisited(n, 0);
    for (int i = 0; i < n; i++)
    {
        int min = INT16_MAX;
        int min_idx = -1;
        for (int j = 0; j < n; j++)
        {
            if (isvisited[j] == 1)
            {
                continue;
            }
            else
            {
                if (min > v[j])
                {
                    min = v[j];
                    min_idx = j;
                }
            }
        }
        v[min_idx] = x;
        isvisited[min_idx] = 1;
        x++;
    }
    cout<<endl<<"After replacement , Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << ( v[i])  << " ";
    }
}

// if in array elements are positive only
// int temp = 0, idx = -1;
// cout<<endl<<"After replacement , Array is : ";
// for(int i = 0 ; i<n ; i++)
// {
//     int min = INT16_MAX  ;
//    for(int j = 0 ; j<n;j++)
//    {
//         if(v[j]<min && v[j] > 0)
//         {
//             min = v[j];
//             idx = j;
//         }
//    }
//    v[idx] = temp ;
//    temp--;
// }