#include<iostream>
#include<vector>
using namespace std;
void SkipInt(vector<int> ans , int original[] , int size , int idx , int key)
{
    if(idx==size) {
        for(int i = 0 ; i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        return;
    }
    int el = original[idx];
    if(key==el){
        SkipInt( ans , original , size , idx+1 , key);
    }
    else{
        ans.push_back(original[idx]);
        SkipInt( ans , original , size , idx+1 , key);
    }

}
int main(){
    vector<int> ans;
    int arr[] = {1,5,3,1,8,7,1,4,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 1;
    SkipInt(ans,arr,n,0,key);

}