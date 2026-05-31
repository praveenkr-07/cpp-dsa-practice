#include <iostream>
using namespace std;
// 1 time either 1 jump or 2 jump
int stair1(int n)
{
    if(n == 1 ) return 1;
    if(n==2) return 2;
    return (stair1(n - 2) + stair1(n - 1));
}
// 1 time 1 , 2 or 3 jumps are allowed
int stair2(int n)
{
    if(n == 1 ) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return (stair2(n-3) + stair2(n - 2) + stair2(n - 1));
}
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    cout<<"For " << n <<"th Stair , No. of ways : " << stair1(n);
}