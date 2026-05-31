#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the Number of rows : ";
    cin >> m;
    cout << "Enter the Number of columns : ";
    cin >> n;
    int arr[m][n];
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "Sum of all the elements of the array is : " << sum;

    return 0;
}