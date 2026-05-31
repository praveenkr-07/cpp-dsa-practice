// leetcode : 239
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
    vector<int> nextLargerIdx(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n);
        ans[n-1] = n;
        stack<int> st;
        
        st.push(n-1);
        
        for(int i = n-2 ; i>=0 ; i--)
        {
            while(st.size()!=0 && arr[st.top()]<= arr[i]) st.pop();
            if(st.size()!=0)ans[i] = st.top();
            else ans[i] = n;
            st.push(i);
        }
        return ans;
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1) return nums;
        int n = nums.size();
        vector<int> ngi = nextLargerIdx(nums);
        vector<int> ans;
        int j  = 0;
        for(int i = 0 ; i < n-k+1 ; i++)
        {
            if(j<i) j=i;
            int mx = nums[j];
            while(j < i+k )
            {
                mx = nums[j];
                if(ngi[j]>= i+k) break;
                j = ngi[j];
            }
            ans.push_back(mx);
        }
        return ans;
    }
int main()
    {
    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    vector<int> ans = maxSlidingWindow(arr,3);
    for (int i = 0 ; i<ans.size() ; i++) cout<<ans[i]<<" ";
    }