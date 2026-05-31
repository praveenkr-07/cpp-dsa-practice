#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int i = 1;

    do
    {
        cout << i << endl;
        i++;
    } while (i <= n + 1);

        return 0;
}