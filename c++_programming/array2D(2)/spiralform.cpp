#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the Number of rows : ";
    cin >> m;
    cout << endl;
    cout << "Enter the Number of columns : ";
    cin >> n;
    cout << endl;
    int arr[m][n];
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "Array is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "spiral is : " << endl;
    int minr = 0, minc = 0, maxr = m - 1, maxc = n - 1;
    while (minr <= maxr && minc <= maxc)
    {
        // right
        for (int j = minc; j <= maxc; j++)
        {

            cout << arr[minr][j] << " ";
        }
        minr++;
        if (minr > maxr || minc > maxc)
            break;
        // down
        for (int i = minr; i <= maxr; i++)
        {

            cout << arr[i][maxc] << " ";
        }
        maxc--;
        if (minr > maxr || minc > maxc)
            break;
        // left
        for (int j = maxc; j >= minc; j--)
        {
            cout << arr[maxr][j] << " ";
        }
        maxr--;
        if (minr > maxr || minc > maxc)
            break;
        // top
        for (int i = maxr; i >= minr; i--)
        {
            cout << arr[i][minc] << " ";
        }
        minc++;
    }
    return 0;
}