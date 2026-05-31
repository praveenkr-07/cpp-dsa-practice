#include<iostream>
using namespace std;
void display(int arr[],int size , int idx)
{
    if(idx==size) return;
    cout<<arr[idx]<<" ";
    display(arr,size,idx+1);

}
void printmax(int arr[], int size , int idx , int max)
{
    if(idx==size){
        cout<<max;
        return;
    }
    if(arr[idx]>max) max = arr[idx];
    printmax(arr, size , idx+1 , max);
}
int MaxInArray(int arr[],int size , int idx){
    if(idx==size){
        return INT16_MIN;
    }
    return max(arr[idx],MaxInArray(arr,size,idx+1));
}
int main()
{
    int arr[] = {1,5,3,9,8,7,6,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
    cout<<endl;
    //printmax(arr,n,0,INT16_MIN);
    cout<<MaxInArray(arr,n,0);
}