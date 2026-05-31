// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
//  Output: [1,2,2,3,5,6]
//  n -> represents number of elements in nums2 as well as number of zeroes in nums1
//  m -> nnumber of valid elements in nums1

#include <iostream>
#include <vector>
using namespace std;
void MergeSortedarraysLT(vector<int> &nums1, vector<int> &nums2, int m, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (j >= 0)
    {
            if (i >= 0 && nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
                k--;
            }

            else
            {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
           // k--;
    }
}

int main()
{
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);

    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);

    int m = 3;
    int n = 3;

    cout<<"Array nums 1 : ";
    for (int i = 0 ; i < nums1.size() ; i++)
    {
        cout << nums1[i] << " ";
    }
    cout<<endl;

     cout<<"Array nums 2 : ";
    for (int i = 0 ; i < nums2.size() ; i++)
    {
        cout << nums2[i] << " ";
    }
    cout<<endl;

    cout<<"Updated Array nums 1  : ";
    MergeSortedarraysLT(nums1 , nums2 , m , n);
    for (int i = 0; i < nums1.size() ; i++)
    {
        cout << nums1[i] << " ";
    }
    cout<<endl;
}