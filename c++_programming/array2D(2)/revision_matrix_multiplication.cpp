#include <iostream>
using namespace std;
int main()
{
    int m, n, p, q;

    cout << "Enter the number of rows of Matrix 1 : ";
    cin >> m;
    cout << "Enter the number of columns of Matrix 1 : ";
    cin >> n;
    cout << "Enter the number of rows of Matrix 2 : ";
    cin >> p;
    if (n != p)
    {
        cout << "Matrix Multiplication isn't possible " << endl;
        return 0;
    }
    cout << "Enter the number of columns of Matrix 2 : ";
    cin >> q;

    int arr1[m][n], arr2[p][q];
    cout << "Enter the elements of Matrix 1 : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter the elements of Matrix 2 : " << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> arr2[i][j];
        }
    }

    cout << "Matrix 1 is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matrix 2 is : " << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // multiplying
    int res[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    // resultant multiplied matrix
    cout << "Multiplication of two matrices is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}