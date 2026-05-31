#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the Number of rows : ";
    cin >> m;
    cout << "Enter the Number of columns : ";
    cin >> n;
    int arr1[m][n];
    cout << "Enter the elements of the 1st Matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    int arr2[m][n];
    cout << "Enter the elements of the 2nd Matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
    }
    cout << "Resultant Matrix is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}