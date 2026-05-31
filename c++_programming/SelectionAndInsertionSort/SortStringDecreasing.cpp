#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, str = "";
    cout << "Enter your string : ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'X')
        {
            str.push_back(s[i]);
        }
    }
    cout << "After removal of characters smaller than 'X' string str : " << str;

    int n = str.length();
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1 && str[j] > str[j - 1])
        {
            swap(str[j], str[j - 1]);
            j--;
        }
    }
    cout << endl
         << "After sorting string str : " << str;
}