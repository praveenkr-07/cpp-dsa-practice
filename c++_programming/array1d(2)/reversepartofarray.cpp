#include <iostream>
#include <vector>
using namespace std;
void swap_and_display(vector<int> &a, int j, int st)
{
    for (int i = st; i <= j; i++)
    {
        int temp;
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
        j--;
    }
    // int i = st;
    //  while (i<= j)
    // {
    //     int temp;
    //     temp = a[j];
    //     a[j] = a[i];
    //     a[i] = temp;
    //     i++;
    //     j--;
    // }
}
void display(vector<int> a, int size)
{
    cout << "array : ";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    vector<int> v;
    int n, a, b;
    cout << "Enter array size : ";
    cin >> n;
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    cout << "Enter the starting index from where you wwant to reverse your array : ";
    cin >> a;
    cout << "Enter the last index till where you wwant to reverse your array : ";
    cin >> b;
    int j = b;
    display(v, n);
    swap_and_display(v, j, a);
    cout << "Reversed ";
    display(v, n);

    return 0;
}