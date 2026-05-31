#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(6);
    v.push_back(3);
    v.push_back(9);
    v.push_back(5);
    v.push_back(21);
    v.push_back(3);
    v.push_back(90);
    v.push_back(41);
    v.push_back(69);
    v.push_back(35);
    v.push_back(96);
    cout << " size : " << v.size() << endl;
    cout << " Capacity : " << v.capacity() << endl;
    
    //printing elements
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << " size : " << v.size() << endl;
    cout << " Capacity : " << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}