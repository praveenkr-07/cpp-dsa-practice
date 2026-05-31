#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;

    int i = (int)ch;

    if(i>= 97 && i<=122 || i>=65 && i<=90 )
    {
        cout<<"your character is an alphabet ";
    }
    
    else
    {
        cout<<"your character is not an alphabet ";
    }
}