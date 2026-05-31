#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change2D(int arr[3][3]){
    arr[0][0] = 100;
}
int main()
{
    int arr[3][3] ={{1,2,3} ,{4,2,9} ,{11,2,23} };

    cout<<arr[0][0]<<endl;
    change2D(arr);
    cout<<arr[0][0]<<endl;
}
