#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the day number of week: ";
    cin >> x;

    switch (x)
    {

    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wenzday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "sunday";
        break;

    default:
        cout << "take a coffee and come back";
        break;
    }
}