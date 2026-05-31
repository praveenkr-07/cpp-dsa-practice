#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5); // when size is given 
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }

    return 0;
}