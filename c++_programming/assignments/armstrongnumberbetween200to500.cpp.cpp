#include<iostream>
using namespace std;
int main()
{
    int i , p ,r , arm = 0 ;
    p = i;
    for(i = 1 ; i <= 500 ; i++ )
    {
        while(i>0){
        r = i % 10;
        arm+=(r*r*r);
        i/=10;
        
        if(p == arm)
        {
            cout<<p<<endl;
        }
    }
}
}