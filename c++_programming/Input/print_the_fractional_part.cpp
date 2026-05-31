#include <iostream>
using namespace std;
int main()
{
    float y;
    cout << "Enter a no.";
    cin >> y;

    int x = (int)y;
    if (x < 0)
    {
        x--;
    }
    float z = float(x);
    cout << "the fractional part  of your number is " << (y - z) << endl;
}