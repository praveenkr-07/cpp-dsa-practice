#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> preGreaterEle(vector<int>& arr) {
        int n = arr.size();
       stack<int> st;
        vector<int>ans(n);
        ans[0]=-1;
        st.push(arr[0]);
        
        for(int i = 1 ; i<n ; i++)
        {
            //1. POP
            while(st.size()!= 0 && arr[i]>= st.top() ) st.pop();
            //2. Fill ans
            if(st.size() != 0) ans[i] = st.top();
            else ans[i] = -1;
            //3. PUSH for Further comparison for  next elements 
            st.push(arr[i]);
        }
        return ans;
    }
int main()
    {
    vector<int> arr = {6,8,0,1,3};
    vector<int> ans = preGreaterEle(arr);
    for (int i = 0 ; i<ans.size() ; i++) cout<<ans[i]<<" ";
    }