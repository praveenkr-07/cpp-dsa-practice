#include<iostream>
#include<vector>
using namespace std;
void printSubArray(int arr[] , int size , int idx , vector<int> ans)
{
    if(idx==size) {
        cout<<"{ ";
        for(int i = 0 ; i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<"}";
        return ;
    }
    
    //exclude
    printSubArray(arr , size , idx+1 , ans);

    //conditional include
    if(ans.size()==0 || arr[idx-1]== ans[ans.size()-1])
    {
        ans.push_back(arr[idx]);
        printSubArray(arr , size , idx+1 , ans);
    }
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    printSubArray(arr,n, 0,v);
   
}