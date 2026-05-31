#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void storeSubset(string emp, string orignal, vector<string> &v, bool flag)
{
    if (orignal.length() == 0)
    {
        v.push_back(emp);
        return;
    }
    char ch = orignal[0];
    if (orignal.length() == 1)
    {
        storeSubset(emp + ch, orignal.substr(1), v, true);
        storeSubset(emp, orignal.substr(1), v, true);
        return;
    }
    char dh = orignal[1];
    if (ch == dh)
    {
        if (flag == true)
            storeSubset(emp + ch, orignal.substr(1), v, true);
        storeSubset(emp, orignal.substr(1), v, false);
    }
    else
    {
        if (flag == true)
            storeSubset(emp + ch, orignal.substr(1), v, true);
        storeSubset(emp, orignal.substr(1), v, true);
    }
}

int main()
{
    string s = "aba";
    sort(s.begin(), s.end());
    vector<string> v;
    storeSubset("", s, v, true);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
}
