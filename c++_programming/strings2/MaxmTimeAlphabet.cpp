#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

    string str;
    cout << "enter your string : ";
    getline(cin, str);

    int n = str.length();

    cout << "your string is : " << str << endl;

    vector<int> v(26, 0);
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        int ascii = (int)ch;
        v[ascii - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (v[i] > max)
            max = v[i];
    }

    for (int i = 0; i < 26; i++)
    {
        if (v[i] == max)
        {
            int ascii = i + 97;
            char ch = char(ascii);
            cout << ch << " : " << max << endl;
        }
    }
}
