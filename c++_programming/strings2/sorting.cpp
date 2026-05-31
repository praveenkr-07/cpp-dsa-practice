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
    getline(cin, str);

    int n = str.length();
    cout << "your string is : " << str << endl;
    sort(str.begin(), str.end()); // based of ascii values -> lexographically sorting
    cout << "Updated string is : " << str << endl;
}
