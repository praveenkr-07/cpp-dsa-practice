#include <iostream>
using namespace std;
int main()
{
    int a, b; float prod = 1;
    cout << "Enter base : ";
    cin >> a;
    cout << "Enter exponent : ";
    cin >> b;
    if (a == 0 && b == 0)
    {
        cout << "Not Defined !!";
    }
    else
    {
        if (b > 0)
        {
            for (int i = 1; i <= b; i++)
            {
                prod = a * prod;
            }
            cout << a << " raise to the power " << b << " is : " << prod;
        }
        if (b == 0)
        {
            cout << a << " raise to the power " << b << " is : " << 1;
        }
        if (b < 0)
        {

            b = -b;
            for (int i = 1; i <= b; i++)
            {
                prod = a * prod;
            }
            float c = 1 / prod;
            cout << a << " raise to the power " << b << " is : " << c;
        }
    }
}