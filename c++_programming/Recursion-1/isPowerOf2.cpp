#include <iostream>
using namespace std;
bool isPowOf2(int n)
{ 
    if(n==1) return true;
    else if (n<=0 || n%2 != 0) return false;
    else return isPowOf2(n/2);
}
int main()
{
    cout<<isPowOf2(12);
}