#include<iostream>
#include<vector>
using namespace std;
void printSubset(int arr[] , int size , int idx , vector<int> ans)
{
    if(idx==size) {
        cout<<"{ ";
        for(int i = 0 ; i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<"}";
        return ;
    }
    printSubset(arr , size , idx+1 , ans);
    ans.push_back(arr[idx]);
    printSubset(arr , size , idx+1 , ans);
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    printSubset(arr,n,0,v);
}