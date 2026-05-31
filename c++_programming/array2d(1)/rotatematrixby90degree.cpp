#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the Number of rows / columns  : ";
    cin >> m;
    int arr[m][m];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing normal array
    cout << "Array is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // transforming to transpose
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout << endl;

    // printing transpose
    cout << "Transpose of matrix is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // rotating by 90 degrees
    for (int i = 0; i < m; i++)
    {
            int left = 0, right = m - 1;
            while (left < right)
            {
                int temp = arr[i][left];
                arr[i][left] = arr[i][right];
                arr[i][right] = temp;
                left++;
                right--;
            }
        
    }
    //     {
    //         for (int i = 0; i < m; i++)
    // {
    //     int left = 0, right = m - 1;
    //     while (left < right)
    //     {
    //         int temp = arr[i][left];
    //         arr[i][left] = arr[i][right];
    //         arr[i][right] = temp;
    //         left++;
    //         right--;
    //     }
    // }
    // }
    // printing 90 degree rotated array
    cout << "After rotating 90 degrees Clockwise : ";
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}