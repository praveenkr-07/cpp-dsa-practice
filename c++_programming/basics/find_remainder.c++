#include<iostream>
using namespace std;
int main(){
    // using dividend = divisor*quotient + remainder
    int a = 10;//dividend 
    int b = 2;//divisor
    int q = a/b;//quotient
    int r = a - (b*q);// remainder 
    cout<<r<<endl;
    cout<<a%b;//modulus operator 
}