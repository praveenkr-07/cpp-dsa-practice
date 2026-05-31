#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int digits = 0;
    if (n == 0)
    {
        cout << " number of digits : 1";
    }
    else
    {
        while (n > 0)
        {
            digits++;
            n /= 10;
        }
        cout << "Number of digits are : " << digits;
    }
}
