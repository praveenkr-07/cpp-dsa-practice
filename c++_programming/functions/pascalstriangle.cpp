#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1 || n == 0)
        return (1);
    else
        return (n * fact(n - 1));
}
int comb(int n, int r) //  n -> no. of row , r -> no. of column
{
    int x = fact(n) / (fact(r) * fact(n - r));
    {
        return (x);
    }
}
int main()
{
    int n;
    cout << "Enter the value of rows : ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " " << comb(i, j) << " ";
        }
        cout << endl;
    }
}