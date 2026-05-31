#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter No. of Rows : ";
    cin >> n;
    for (int i = 1; i <= 2*n-1; i++)
    {
        cout<<" * ";
    }
    cout << endl;
    for(int j =1 ; j<=n-1 ; j++)
    {
        for(int k =1 ; k <= (n-j) ;k++)
        {
            cout<<" * ";
        }
        for (int m = 1; m <= 2*j - 1; m++)
        {
            cout << "   ";
        }
        for (int l = 1; l <= (n -j) ; l++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}