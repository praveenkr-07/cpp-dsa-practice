#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    int y = (int)ch;// ASCII value of 'A'
    cout << y << endl;

    char ph;
    cout<<"Enter your case alphabet";
    cin>>ph;

    int i = (int)ph+1;//ASCII value of ch
    cout << "the rank of your alphabet is " <<(i-y);
}