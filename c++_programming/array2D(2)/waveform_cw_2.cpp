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
    cout << "Array is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Waveform is : " << endl;

    for (int j = 0; j<n ; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0 ; i < n; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = m - 1 ; i >=0  ; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}