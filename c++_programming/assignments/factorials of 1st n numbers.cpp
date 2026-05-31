#include<iostream> 
using namespace std;
int main(){
  
    int n, fact, a;
    cout << "Enter a number : ";
    cin >> n;
    fact = 1;
    a = n;
    for(int p = 1 ; p<=n;p++)
    {
    if (a > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= a;
            a--;
        }
    }
    cout <<  fact <<endl;
    }
}