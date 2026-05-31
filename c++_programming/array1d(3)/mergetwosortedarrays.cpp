#include <iostream>
#include <vector>
using namespace std;
void MergeTwoSortedArray(vector<int> &v1, vector<int> &v2, vector<int> &v3)
{
    // int n =  v1.size() + v2.size() ;
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < v1.size() && j < v2.size())
    {
        {
            if (v1[i] < v2[j])
            {
                v3[k] = v1[i];
                i++;
                k++;
            }
            else // (v1[i] > v2[j])
            {
                v3[k] = v2[j];
                j++;
                k++;
            }
        }
    }
    // remaining elements
    if (i == v1.size()) // v1 chota h
    {
        while (j < v2.size())
        {
            v3[k] = v2[j];
            k++;
            j++;
        }
    }
    if (j == v2.size()) // v2 chota h
    {
        while (i < v1.size())
        {
            v3[k] = v1[i];
            k++;
            i++;
        }
    }
}



int main()
{
    int size1;
    cout << "Enter the size of 1st array -> ";
    cin >> size1;
    vector<int> v1;
    cout << "Enter the elements of 1st array in sorted manner : " ;
    for (int i = 0; i < size1; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    int size2;
    cout << "Enter the size of 2nd array -> ";
    cin >> size2;
    vector<int> v2;
    cout << "Enter the elements of 2nd array in sorted manner : " ;
    for (int i = 0; i < size2; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }


    cout << "your 1st array is -> ";
    for (int i = 0; i < size1; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "your 2nd array is -> ";
    for (int i = 0; i < size2; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    vector<int> v3(size1 + size2);

    MergeTwoSortedArray(v1, v2, v3);

    cout << "your sorted merge array is -> ";
    for (int i = 0; i < v3.size() ; i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
}