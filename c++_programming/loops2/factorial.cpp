#include <iostream>
using namespace std;
int main()
{
    int n, fact, a;
    cout << "Enter a number : ";
    cin >> n;
    fact = 1;
    a = n;
    if (a > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= a;
            a--;
        }
    }
    cout << "factorial of " << n << " is : " << fact;

    if (n = 0)
        cout << "factorial of 0 is : 1";
}
