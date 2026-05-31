#include <iostream>
#include <vector>
using namespace std;
void swap(vector<int> &vec)
{
    int i = 0, j = vec.size() - 1;
    while (i < j)
    {
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
        i++;
        j--;
    }
}
void display(vector<int> v)
{
    cout << "array : ";
    for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
    cout << endl;
}
int main()
{
    vector<int> v;
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << "Enter the array elements : ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    swap(v);
    display(v);
}