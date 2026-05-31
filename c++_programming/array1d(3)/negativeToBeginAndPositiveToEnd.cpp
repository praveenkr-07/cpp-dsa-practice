#include <iostream>
#include <vector>
using namespace std;
void sortArray(vector<int> &arr)
{
    // method-1
    //  int noz = 0, noo = 0;
    //  for (int i = 0; i < arr.size(); i++)
    //  {
    //      if (arr[i] == 0)
    //          noz++;
    //      else
    //          noo++;
    //  }
    //  for (int i = 0; i < arr.size(); i++)
    //  {
    //      if (i < noz)
    //          arr[i] = 0;
    //      else
    //          arr[i] = 1;
    //  }

    // method - 2 (two pointers)
    int i = 0, j = arr.size() - 1;
    while (i < j)
    {
        if (arr[i] < 0)
            i++;
        if (arr[j] > 0)
            j--;
        if(i>j) break;
        if (arr[i] > 0 && arr[j] < 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            // arr[i] = 0;
            // arr[j] = 1;
            i++;
            j--;
        }
        
    }
}
int main()
{
    int n;
    cout << "Enter the size of your array -> ";
    cin >> n;
    vector<int> v;
    cout << "Enter elements of  array -> ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "your array is -> ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sortArray(v);
    cout << "After sorting your array is -> ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}