#include <iostream>
using namespace std;
int pow(int a , int b) // a^b
{
    if(b==1) return a;
    int ans = pow(a,b/2);
    if(b%2==0) return ans*ans;
    else return a*ans*ans;   
}
int main()
{
    int a , b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<a<<" ^ "<<b<<" : "<<pow(a,b);
}