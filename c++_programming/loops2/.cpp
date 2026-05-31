#include<iostream>
using namespace std;
int main()
{
    bool flag = true ;// this means no. is prime
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if (n<=1 ){
        cout<<n <<" is neither prime nor composite";
    }
    else
    {
        for(int i = 2 ; i<(n/2) ; i++ )
        {
        if(n%i == 0){ flag = false;}
        break;
        }
        if(flag == true )
        {
            cout<< n <<" is a prime number ";
        }
        else { cout<< n <<" is a composite number ";}
    }    
    return 0;

}