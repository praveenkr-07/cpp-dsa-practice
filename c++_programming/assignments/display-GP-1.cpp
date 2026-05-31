#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int a = 3;

    // 3 12 48  ------

    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a *= 4;
    }
    return 0;
}