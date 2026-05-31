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
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing normal array
    cout << "Array is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // storing transpose
    int transpose[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }
    cout << endl;

    // printing transpose
    cout << "Transpose of matrix is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}