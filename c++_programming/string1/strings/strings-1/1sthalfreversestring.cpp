#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // int n;
    // cout << "Enter the size of string : ";
    // cin >> n;
    string str;
    cout << "enter your string : ";
    getline(cin,str);
    
    int n = str.length();
    cout << "your string is : ";
    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }
    cout << endl;
    cout << "Updated string is : ";
    reverse(str.begin() , str.begin() + n/2);
    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }
}
