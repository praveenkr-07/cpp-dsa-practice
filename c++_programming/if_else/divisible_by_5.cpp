#include<iostream> 
using namespace std;
int main()
{
    int x;
    cout << "enter a number :";
    cin >> x;
    if (x % 5 == 0)
    {
        cout << "your no. is divisible by 5";
    }
    
    else
    {
        cout << "your no. is not divisible by 5 ";
    }
    return 0;
}