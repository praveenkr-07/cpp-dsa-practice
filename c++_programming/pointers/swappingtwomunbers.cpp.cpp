#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x, y;
    cout << "Enter 1st number(x) : ";
    cin >> x;
    cout << "Enter 2nd numner(y): ";
    cin >> y;
    swap(&x, &y);
    cout << "VALUES ARE SWAPPED " << endl;
    cout << "The value of x is : " << x << endl;
    cout << "The value of y is : " << y << endl;

    return 0;
}