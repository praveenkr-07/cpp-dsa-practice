#include <iostream>
using namespace std;
void zigzag(int n)
{
    if (n == 1)
    {
        cout << 111;
        return;
    }
    cout << n;
    zigzag(n - 1);
    cout << n;
    zigzag(n - 1);
    cout << n;
}
int main()
{
    zigzag(3);
}
