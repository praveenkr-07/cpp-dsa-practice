#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 15};
    int idx = -1;
    for (int i = 1; i < v.size(); i++)
        v[i]+=v[i - 1];

    for (int i = 1; i < v.size(); i++)
    {
        if (2 * v[i] == v[v.size() - 1])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
        cout << "Can't be Partitioned.";
    else
        cout << "Can be Partitioned after index " << idx;
}