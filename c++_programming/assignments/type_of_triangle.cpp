#include <iostream>
using namespace std;
int main()
{
    int ab, bc, ca;

    cout << "Enter the first side of your triangle : ";
    cin >> ab;

    cout << "Enter the second side of your triangle : ";
    cin >> bc;

    cout << "Enter the third side of your triangle : ";
    cin >> ca;

    if ((ab + bc > ca) && (bc + ca > ab) && (ab + ca > bc))
    {
        if (ab == bc && bc == ca)
        {
            cout << "this is an equilateral triangle";
        }

        else if (ab != bc && bc != ca)
        {
            cout << "this is a Scalene triangle";
        }

        else if(ab == bc || bc == ca || ca == ab)
        {
            cout << "this is an isosceles triangle";
        }
    }

    else
    {
        cout << "this is not a valid triangle";

        return 0;
    }
}