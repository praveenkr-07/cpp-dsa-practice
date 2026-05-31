#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter the size of your string : ";
    cin >> n;

    char str[n];
    cout << "Enter a string : ";
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            str[i] = 'a';
    }

    cout << "Updated string is : ";
    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }
}