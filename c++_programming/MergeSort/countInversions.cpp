#include <iostream>
#include <vector>
using namespace std;
int Inversion(vector<int> &a, vector<int> &b)
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
        { // a[i]<=b[j]
            i++;
        }
    }
    return c;
}
void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
        {
            res[k] = a[i];
            i++;
        }
        else if (a[i] > b[j])
        {
            res[k] = b[j];
            j++;
        }
        k++;
    }
    if (i == a.size())
    {
        while (j < b.size())
        {

            res[k] = b[j];
            k++;
            j++;
        }
    }
    else if (j == b.size())
    {
        while (i < a.size())
        {

            res[k] = a[i];
            i++;
            k++;
        }
    }
    return;
}
int mergeSort(vector<int> &v)
{
    int n = v.size(), count = 0;
    if (n == 1)
        return 0;
    int n1 = n / 2, n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    // copy pasting
    for (int i = 0; i < n1; i++)
    {
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = v[i + n1];
    }

    // magic or Recursion
    count += mergeSort(a);
    count += mergeSort(b);
    // mergeSort(a);
    // mergeSort(b);

    // count inversions
    count += Inversion(a, b);
    // merge
    merge(a, b, v);
    a.clear();
    b.clear();
    return count;
}
int main()
{
    int brr[] = {5, 3, 4, 2, 1};
    int n2 = sizeof(brr) / sizeof(brr[0]);
    vector<int> b(brr, brr + n2);
    cout << "Before Sorting -> ";
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;
    int inversions = mergeSort(b);
    cout << "After  Sorting -> ";
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << "\nInversions -> " << inversions;
}