#include<iostream>
using namespace std;
int partition(int arr[], int si , int ei){
    // randomised pivot 
    // this improves time complxity of worst case 
    // TC = O(n.logn)
    // SC = O( logn )
    int pivot = arr[(si+ei)/2];
    int count = 0;
    for(int i = si ; i<= ei ; i++){
        if(pivot == arr[i]) continue;
        if(pivot >= arr[i]) count++;
    }
    int pivotIdx = count+si;
    swap(pivot,arr[count+si]);

    int i = si;
    int j = ei;
    while( (i<pivotIdx) && (j>pivotIdx) ){
        if(arr[i]<=arr[pivotIdx]) i++;
        else if(arr[j]>arr[pivotIdx]) j--;
        else if(arr[i]>arr[pivotIdx] && arr[j]<arr[pivotIdx] ){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quickSort(int arr[], int si , int ei){
    if(si>=ei)  return;
    int pivotIdx = partition(arr,si,ei);
    quickSort(arr,si,pivotIdx-1);
    quickSort(arr,pivotIdx+1,ei);
}
int main(){
    int arr[] = {7,3,5,2,1,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int si = 0;
    int ei = n-1;

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quickSort(arr,si,ei);

    for(int i=0 ; i<n ; i++){
            cout<<arr[i]<<" ";
        }
}
