#include <iostream>
using namespace std;
int main()
{
    int n, a = 4;
    cout << "Enter a number : ";
    cin >> n;

    // 4 7 10 13 15 ------

    for (int i = 1; i <= n; i += 1)
    {
        cout << a << endl;
        a *= 2;
    }
    return 0;
}
