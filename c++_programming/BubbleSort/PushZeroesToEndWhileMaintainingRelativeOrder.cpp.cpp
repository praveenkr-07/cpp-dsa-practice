#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {5,0,1,2,0,0,4,0,3};
        for (int i = 0; i < v.size() - 1; i++) // n-1 passes
        {
            bool flag = true;
            // traverse
            for (int j = 0; j < v.size() - 1 - i; j++)
            {
                if (v[j] == 0)
                {
                    int temp = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = temp;
                    flag = false;
                }
            }
            if (flag == true){ 
                break;
            }                
        }
    
    for (int i = 0; i < v.size(); i++) // n-1 passes
    {
        cout << v[i] << " ";
    }
    return 0;
}
