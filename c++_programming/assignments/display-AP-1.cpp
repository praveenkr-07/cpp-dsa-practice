#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int a = 4;

    // 4 7 10 13 16 ------

    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a += 3;
    }
    return 0;
}