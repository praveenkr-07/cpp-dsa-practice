// 1 2 3 4 5 6 7
// 1 2 3   5 6 7
// 1 2       6 7
// 1           7
#include <iostream>
using namespace std;
int main()
{
    int n, a , m;
    cout << "Enter No. of Rows : ";
    cin >> n;
    m = n - 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i;
    }
    cout << endl;
    for (int j = 1; j <= m; j++)
    {
        a = 1;
        for (int k = 1; k <= (m - j + 1); k++)
        {
            cout<<a;
            a++;
        }
        // cout << endl;

    
    for(int l = 1 ; l <= (2*j-1); l++)
    {
        cout << " ";
        a++;
    }

    for (int k = 1; k <= (m - j + 1); k++)
    {
        cout << a;
        a++;
    }
    cout << endl;
}
}