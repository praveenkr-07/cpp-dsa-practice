#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // 100 97 94 91  ------ 7 4 1 

    for (int i = n ; i >= 1 ; i -= 3)
    {
        cout << i << endl;
    }
    return 0;
}