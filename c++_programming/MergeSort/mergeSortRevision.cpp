#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<=b[j]) {
            res[k] = a[i];
            i++;
            k++;
        }
        else  // (a[i]>b[j]) 
        {
            res[k] = b[j];
            j++;
            k++;
        }
       
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k] = b[j];
            j++;
            k++;
        }
    }
    if(j==b.size()){
        while(i<a.size())
        {
            res[k] = a[i];
            i++;
            k++;
        }
    }
    return ;
}
void mergeSort(vector<int>&v){
    int n = v.size();
    // base case
    if(n==1) return;  
    int n1 = n/2; // a.size() = n1
    int n2 = n - n1; // b.size() = n - n1
    int j  = 0;
    // copy pasting of elements 
    vector<int>a(n1),b(n2);
    for(int i = 0 ; i<n ; i++)
    {
        if( i < n1) a[i] = v[i];
        else{
            b[j] = v[i];
            j++;
        }
    }
    // recursion
    mergeSort(a);
    mergeSort(b);

    // merge
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    vector<int> v= {7,3,5,2,1,4,6};
    for(int i = 0 ; i< v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i = 0 ; i< v.size(); i++){
        cout<<v[i]<<" ";
    }

}