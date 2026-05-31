#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    vector<string> v;
    v.push_back("0123");
    v.push_back("0023");
    v.push_back("456");
    v.push_back("940");
    v.push_back("00182");
    v.push_back("000002901");

    int max = stoi(v[0]);
    string maxstring = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (max < stoi(v[i]))
            {
                max = stoi(v[i]);
                maxstring = v[i];
            }
    }
    cout << "Maximum is -> " << max <<" and its corresponding string is -> "<<maxstring << endl;
}
