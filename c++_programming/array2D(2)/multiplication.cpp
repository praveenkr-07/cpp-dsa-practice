#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the rows of 1st Matrix : ";
    cin >> m;
    cout << endl;

    int n;
    cout << "Enter the columns of 1st Matrix : ";
    cin >> n;
    cout << endl;

    int q;
    cout << "Enter the rows of 2nd Matrix : ";
    cin >> q;
    cout << endl;

    // checkpoint
    if (n != q)
    {
        cout << "Matrix Multiplication is not possile ";
        return 0;
    }

    int p;
    cout << "Enter the columns of 2nd Matrix : ";
    cin >> p;
    cout << endl;
    int arr1[m][n], arr2[q][p], res[m][p];

    // taking user inputs of 1st matrix
    cout << "Enter the elements of 1st Matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << endl;

    // taking user inputs of 2nd matrix
    cout << "Enter the elements of 2nd Matrix : " << endl;
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> arr2[i][j];
        }
    }
    cout << endl;

    // printing 1st matrix
    cout << "1st matrix is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // printing 2nd matrix
    cout << "2nd matrix is : " << endl;
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // multiplying
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < q; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout << endl;

    // printing multiplied matrix
    cout << "Resultant Matrix is  : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// output 1

// Enter the columns of 1st Matrix : 3

// Enter the rows of 2nd Matrix : 3

// Enter the columns of 2nd Matrix : 3

// Enter the elements of 1st Matrix :
// 1 2 3
// 4 5 6
// 7 8 9

// Enter the elements of 2nd Matrix :
// 9 8 7
// 6 5 4
// 3 2 1

// 1st matrix is :
// 1 2 3
// 4 5 6
// 7 8 9

// 2nd matrix is :
// 9 8 7
// 6 5 4
// 3 2 1

// Resultant Matrix is  :
// 30  24  18
// 84  69  54
// 138 114  90

// Enter the rows of 1st Matrix : 2

// Enter the columns of 1st Matrix : 3

// Enter the rows of 2nd Matrix : 3

// Enter the columns of 2nd Matrix : 4

// Enter the elements of 1st Matrix :
// 1 2 3
// 4 5 6

// Enter the elements of 2nd Matrix :
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

// output 2

// 1st matrix is :
// 1 2 3
// 4 5 6

// 2nd matrix is :
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

// Resultant Matrix is  :
// 38 44 50 56
// 83 98 113 128
