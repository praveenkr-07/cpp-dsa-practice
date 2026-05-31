#include<iostream>
#include<vector>
using namespace std;
int gcd(int num1 , int num2) // num2>num1
{
    // Iterative => worst case time complexity => O(minimum of num1 and num2)
    // for(int i = min(num1,num2);i>=2;i--){
    //     if(num1%i == 0 && num2%i == 0) return i ;
    // }
    // return 1;


    // recursive => time complexity => O(log(num1 + num2)) ; can be proved  by induction
    if(num1 == 0 ) return num2;
    else return gcd(num2 % num1,num1);
}

int main(){
    int num1 = 12;
    int num2 = 25;
    cout<<gcd(num1,num2);
}
