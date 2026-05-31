#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int sum = 0;
    // 1- 2 + 3 - 4 + 5 -6.....
    // for(int i =1 ; i<=n; i++){
    //     if(n%2!=0) sum +=i;
    //     else sum-=i;
    // }
   

    if (n % 2 == 0)
    {
        sum = -1 * (n / 2);
        cout << "sum of this series till " << n << " is : " << sum;
    }
    else
    {
        sum = ((-1*n)/2) + n;
        cout << "sum of this series till " << n << " is : " << sum;
    }

    return 0;
}