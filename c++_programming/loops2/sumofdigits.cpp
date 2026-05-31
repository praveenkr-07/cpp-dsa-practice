#include <iostream>
using namespace std;
int main()
{
    int n,r;
    cout << "Enter a number : ";
    cin >> n;
    int digits = 0;
    if (n == 0)
    {
        cout << "sum  of digits : 0";
    }
    else
    {
        while (n > 0)
        {   r = n%10;
            digits+r;
            n /= 10;
        }
        cout << " sum  of digits is  : " << digits;
    }
}