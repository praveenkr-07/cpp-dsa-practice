#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n);
        ans[n-1] = -1;
        stack<int> st;
        
        st.push(arr[n-1]);
        
        for(int i = n-2 ; i>=0 ; i--)
        {
            while(st.size()!=0 && st.top()<= arr[i]) st.pop();
            if(st.size()!=0)ans[i] = st.top();
            else ans[i] = -1;
            st.push(arr[i]);
        }
        
        return ans;
    }
    int main()
    {
    vector<int> arr = {6,8,0,1,3};
    vector<int> ans = nextLargerElement(arr);
    for (int i = 0 ; i<ans.size() ; i++) cout<<ans[i]<<" ";
    }