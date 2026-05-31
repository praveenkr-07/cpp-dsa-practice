#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1 || n == 0)
        return (1);
    else
        return (n * fact(n - 1));
}
int comb(int n, int r)
{

    int x = fact(n) / (fact(r) * fact(n - r));
    {
        return (x);
    }
}
int perm(int n, int r)
{
    
    int x = fact(n) / (fact(n - r));

    {
        return (x);
    }
}
int main()
{
    int n, r, x, y;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;
    x = comb(n, r);
    y = perm(n, r);
    cout << "The Combination Of Given Numbers i.e. " << n << " and " << r << " is : " << x << endl;
    cout << "The Permutation Of Given Numbers i.e. " << n << " and " << r << " is : " << y << endl;
}