#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    bool flag = true;// flag true hone ka mtlb h no. prime h

    if (n <= 1)
    {
        cout << n << "  is neither prime nor composite";
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = false; // not prime
                break;
            }
        }

        if (flag == true)
        {
            cout << n << " is a prime number ";
        }
        else
        {
            cout << n << " is a composite number ";
        }
    }
    return 0;
}