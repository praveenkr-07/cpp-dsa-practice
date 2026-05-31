#include <iostream>
using namespace std;
int Nthfibonacci(int n)
{
    if (n == 1 || n == 2) return 1;
    return (Nthfibonacci(n - 2) + Nthfibonacci(n - 1));
}
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    cout << n << "th Fibonacci term is : " << Nthfibonacci(n);
}