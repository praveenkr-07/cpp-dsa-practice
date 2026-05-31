#include <iostream>
#include <vector>
using namespace std;
int inversion(vector<int> &a, vector<int> &b)
{
    int i = 0, j = 0, c = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > b[j])
        {
            c += (a.size() - i);
            j++;
        }
        else
            i++;
    }
    return c;
}
int countreversePairs(vector<int> &a, vector<int> &b)
{
    int i = 0, j = 0, c = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > 2 * b[j])
        {
            c+=(a.size()-i);
            j++;
        }
        else
        {
            i++;
        }
    }
    return c;
}
void mergeSortedArray(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
            res[k] = a[i++];
        else
            res[k] = b[j++];
        k++;
    }
    if (i == a.size())
        while (j < b.size())
            res[k++] = b[j++];
    else if (j == b.size())
        while (i < a.size())
            res[k++] = a[i++];
}
int mergeSort(vector<int> &vec)
{
    int n = vec.size();
    int count = 0;
    if (n == 1)
        return 0;
    int n1 = n / 2, n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    for (int i = 0; i < n1; i++)
        a[i] = vec[i];
    for (int i = 0; i < n2; i++)
        b[i] = vec[n1 + i];

    count += mergeSort(a);
    count += mergeSort(b);

    count += inversion(a, b);

    mergeSortedArray(a, b, vec);
    a.clear();
    b.clear();
    return count;
}
int main()
{
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(1);
    cout << mergeSort(vec);
    // 2,4,3,5,1 => 1 + 2 + 1 + 1
}

