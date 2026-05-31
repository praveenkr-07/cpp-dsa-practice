#include <iostream>
using namespace std;
int main()
{
    int a ,b ;
    char ch;

    cout<<"Enter the problem : ";
    cin>>a>> ch >>b;
    
    switch(ch)
    {
    case '+':
        cout << a + b;
        break;

    case '-':
        cout << a - b;
        break;

    case '*':
        cout << a * b;
        break;

    case '/':
        cout << a / b;
        break;

    default:
            cout<<"error";
            break;
    }

}