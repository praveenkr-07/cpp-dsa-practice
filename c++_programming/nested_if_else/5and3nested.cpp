#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number : ";
    int x;
    cin >> x;

    if (x % 3 == 0)
    {

        if (x % 5 == 0)
        {
            cout << "Given number is divisible by both 5 and 3";
        }

        else
        {
            cout << "Given number is not divisible by both 5 and 3";
        }
    }
    
    else
    {
        cout << "Given number is not divisible by both 5 and 3 ";
    }
}