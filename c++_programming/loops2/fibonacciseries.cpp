#include <iostream>
using namespace std;
int main()
{
    int n, a = 1, b = 1, sum;
    cout << "Enter a Number : ";
    cin >> n;

    for (int i = 1; i <= (n - 2); i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << n << " th term of the fibonacci series is : " << b;

    return 0;
}
