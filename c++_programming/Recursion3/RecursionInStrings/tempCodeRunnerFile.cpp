#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void SubString2(string ans, string original, int idx, bool flag)
{
    if (original == "")
    {
        cout << "[";
        cout << ans;
        cout << "]";
        return;
    }
    char ch = original[0];
    if (original.length() == 1)
    {
        SubString2(ans, original.substr(1), idx, 1);
        SubString2(ans + ch, original.substr(1), idx, 1);
        return;
    }
    char dh = original[1];
    if (ch == dh)
    {
        if (flag == true)
        SubString2(ans, original.substr(1), idx, 0);
        SubString2(ans + ch, original.substr(1), idx, 1);
    }
    else
    {
        if (flag == true)
        SubString2(ans, original.substr(1), idx, 1);
        SubString2(ans + ch, original.substr(1), idx, 1);
    }
}

int main()
{
    string str = "aba";
    cout << endl;
    sort(str.begin(), str.end());
    SubString2("", str, 0, true);
}