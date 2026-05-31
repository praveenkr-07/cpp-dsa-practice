#include<iostream>
using namespace std;
void main()
{
    int x;
    cout << "enter an integer :";
    cin >> x;
    if (x<0)
    {
        cout << "Absolute value of your integer is " <<(-x);
    }
    
    else
    {
        cout << "Absolute value of your integer is " << (x);
    }
}