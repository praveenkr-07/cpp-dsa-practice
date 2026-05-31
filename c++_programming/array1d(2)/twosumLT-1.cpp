#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int twosum(vector<int> v, int x)
{
    // O(n^2)
    //  for(int i = 0 ; i < v.size() -1  ; i++ )
    //  {
    //      for(int j = i +1 ; j < v.size()  ; j++)
    //      {
    //          if (v[i] + v[j] == x)
    //      {
    //          cout<<"(" <<v[i]<< " " <<v[j]<< ")" ;
    //      }

    //     }

    // }
    // O(n^2)
    // int i = 0;
    // int j = v.size() -1;
    // for(i ; i<j ; i++)
    //     {
    //         while(j>i)
    //         {
    //             if(v[i]+ v[j] == x)
    //             {
    //                 cout<<"(" <<i<< "," <<j<< ")" ;
    //             }
    //             j--;
    //         }
    //         j = v.size() -1;
    //     }
    // return 0;

    sort(v.begin() , v.end());
    int left = 0;
    int right = v.size() - 1;
    while (left < right)
    {
        if (v[left] + v[right] > x)
            right--;

        else if (v[left] + v[right] < x)
            left++;

        else // (v[left] + v[right] == x)
        {
            cout << "(" << left << "," << right << ")";
            right--;
            left++;
        }
    }
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
    cout << "Enter the sum : ";
    cin >> sum;
    twosum(vec, sum);
    return 0;
}