#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool anagram(string &s, string &t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
            return true;
        else
        {
            return false;
            break;
        }
    }
}
int main()
{
    string str;
    cout << "enter your string (s) : ";
    getline(cin, str);

    string ttr;
    cout << "enter your string (t) : ";
    getline(cin, ttr);

    bool ans = anagram(str, ttr);
    cout << ans;
}
