#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* p = &x;//p is pointer variable ; stores address
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;// this is the derefrence operator ; when we write * before our pointer type variable ; it prints the value at the address of pointer   
    // we can update values using the derefrence operator 
    *p = 9;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<x<<endl;

    return 0 ;
}