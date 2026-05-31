#include <iostream>
#include <vector>
using namespace std;
void combination(int target, vector<int> v, int arr[], int size, int idx)
{
    if (target == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
    if (target < 0)
        return;
    for (int i = idx; i < size; i++)
    {
        v.push_back(arr[i]);
        combination(target - arr[i], v, arr, size, i);
        v.pop_back();
    }
}
int main()
{
    int num[] = {2, 3, 5};
    int size = sizeof(num) / sizeof(num[0]);
    vector<int> v;
    int target = 8;
    combination(target, v, num, size, 0);
}

