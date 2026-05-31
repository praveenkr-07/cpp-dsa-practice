#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter a number";
    int x;
    cin>>x;
    if(100<= x && x <= 999 )
    {
        cout<<"Given number is a three digit number ";
    }
    else
    {
        cout << "Given number is not a three digit number ";
    }
}