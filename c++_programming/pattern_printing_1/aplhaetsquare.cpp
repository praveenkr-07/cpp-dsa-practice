#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter No. of Rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = 65;
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(a) <<" ";//typcasting
            a++;
        }
        cout << endl;
    }
}