#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {5,3,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    float kmin = float(INT16_MIN);
    float kmax = float(INT16_MAX);
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            kmin = max(kmin, float(arr[i] + arr[i + 1]) / 2);
        }
        else
        {
            kmax = min(kmax, float(arr[i] + arr[i + 1]) / 2);
        }
        if (kmin > kmax)
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
        cout<<endl<< -1 ;
        else if(kmin == kmax)
        {
            if(kmin-(int)kmin == 0){
                cout<<"There is only one value of k : "<<kmin;}

           else {
            cout<<endl<< -1 ;

           }
        }

        
    else{
        if(kmin-(int)kmin > 0){
            cout << "\nRange of k is : [" << int(kmin) +1 << " , " << int(kmax) << "]";
        }
        else 
        cout << "\nRange of k is : [" << (kmin) << " , " << int(kmax) << "]";
        }
}

