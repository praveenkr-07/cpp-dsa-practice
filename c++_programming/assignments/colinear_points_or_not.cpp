#include <iostream>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3;
    cout << "enter 1st co-ordinate : ";
    cin >> x1;
    cout << " ";
    cin >> y1;

    cout << "enter 2nd co-ordinate : ";
    cin >> x2;
    cout << " ";
    cin >> y2;

    cout << "enter 3rd co-ordinate : ";
    cin >> x3;
    cout << " ";
    cin >> y3;

    if ((x1 / x2 == y1 / y2) && (x1 / x3 == y1 / y3))
        cout << "given co-ordinates will form a straight line ";

    else
        cout << "given co-ordinates will not form a straight line ";
}