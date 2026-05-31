#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number : ";
    int x;
    cin >> x;

    if (x % 3 == 0 || x % 5 == 0)
    {
        if (x % 15 != 0)
        {
            cout << "The number is divisible by 5 or 3 but not divisible by 15";
        }

        else
        {
            cout << "The number is divisible by 5 or 3 as well as  divisible by 15";
        }
    }
    else
    {
        cout << "Given number is not divisible by both 5 and 3 ";
    }
}
// if ( (x % 3 == 0 || x % 5 == 0) && x % 15 != 0)

//     {
//         cout << "The number is divisible by 5 or 3 but not divisible by 15";
//     }

//     else
//     {
//         cout << "Given number is not divisible by both 5 and 3 ";
//     }
