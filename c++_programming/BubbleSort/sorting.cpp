#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v(5);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end()); // Time complexity ->  O(n.log(n))
    // sort(v.end() , v.begin()); // not working
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}