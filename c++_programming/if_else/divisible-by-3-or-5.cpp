#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;

    if (x % 3 == 0 || x % 5 == 0)
    {
        cout << "Given number is divisible by  5 or 3";
    }

    else
    {
        cout << "Given number is not divisible by both 5 or 3 ";
    }
}