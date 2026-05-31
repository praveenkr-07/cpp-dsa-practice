#include<iostream>
using namespace std;
int main(){
    int n , a = 1 , b = 1 , c;
    cout<<"Enter a number : ";
    cin>>n;
    //1 1 2 3 5 8 13 21 34 55 ----
    cout << a <<"  " << b <<" ";
    for(int i = 1 ; i<=n-2 ; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout<<" "<<b<<" ";
    }
}
