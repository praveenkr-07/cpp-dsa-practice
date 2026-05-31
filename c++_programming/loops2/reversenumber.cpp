#include <iostream>
using namespace std;
int main()
{

    int n, reversed = 0, r;
    cout << "Enter a Number : ";
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        reversed *= 10;
        reversed += r;
        n /= 10;
    }
    cout << "Reversed Number : " << reversed;

    return 0;
}