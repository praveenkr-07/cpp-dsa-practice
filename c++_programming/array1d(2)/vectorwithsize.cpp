#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5 , 7 );// intial size of vector is 5 , each element of vector is 7
    cout << " size : " << v.size() << endl;
    cout << " Capacity : " << v.capacity() << endl;
    for(int i = 0 ; i < v.size(); i++)
    {
        cout<<  v[i]<<" ";
    }
    cout<<v[0];

    return 0;
}