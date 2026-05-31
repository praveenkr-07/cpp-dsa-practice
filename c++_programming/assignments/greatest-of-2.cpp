#include<iostream>
using namespace std;
int main(){
    int a ,b ;
    cout<<"Enter 1st number";
    cin>>a;
    cout<<"Enter 2nd number";
    cin>>b;
    if(a==b)
    cout<<"enter two different numbers";
    else if(a>b)
        cout<<"1st number "<<a<<" is largest";
    else
      cout << "1st number " << b << " is largest";
        }