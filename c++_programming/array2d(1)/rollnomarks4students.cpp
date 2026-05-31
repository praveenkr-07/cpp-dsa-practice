#include<iostream>
using namespace std;
int main(){
    int arr[4][2];
    for(int i = 0 ; i<4 ; i++) // i -> roll no
    {
        for(int j = 0 ; j<2 ; j++) // j -> marks
        {
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i<4 ; i++) // i -> roll no
    {
        for(int j = 0 ; j<2 ; j++) // j -> marks
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}