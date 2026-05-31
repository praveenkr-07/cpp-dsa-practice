#include<iostream>
using namespace std;
//ques 1
int sumOddRange(int a , int b , int sum)
{
   if(a>b) return sum;
   if(a%2!=0) return sumOddRange(a+1,b,sum+a);
   return sumOddRange(a+1,b,sum);
}
//ques 2
int printSum1ToN(int n)
{
    if(n==0) return 0;
    return n + printSum1ToN(n-1);
}
//ques 3
int power(int a , int b)
{
    if(b==0) return 1;
    return a*power(a,b-1);
}
//ques 4
void print1toN(int n)
{
    if(n==0) return;
    print1toN(n-1);
    cout<<n<<" ";
}
int main(){
    cout<<sumOddRange(1,7,0);
}
