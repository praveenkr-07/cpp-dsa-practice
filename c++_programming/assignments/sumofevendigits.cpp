#include <iostream>
using namespace std;
int main()
{
    int n,sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    int digit;
        while (n > 0)
        {
            digit = n%10;
            if(digit%2 == 0)
            {
                sum+=digit;
            }
            n/=10;
        }
        cout << "Sum of Even digits  is  : " << sum;
    
}
