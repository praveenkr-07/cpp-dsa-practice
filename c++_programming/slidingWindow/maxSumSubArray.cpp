#include<iostream>
#include<vector>
using namespace std;
// sliding Window algorithm
vector<int>maxSumSubArray(vector<int> &v , int k)
{
    int n = v.size();
    int maxIndex = -1;
    int prevSum = 0;
    for(int i = 0 ; i<k ; i++)//Time Complexity = O(k)
    {
        prevSum+=v[i];
    }

    int maxSum = prevSum;
    int i = 1;
    int j = k;

    while(j<n)//Time Complexity = O(n-k)
    {
        prevSum = prevSum + v[j] - v[i-1];
        if(prevSum>maxSum)
        {
            maxSum = prevSum;
            maxIndex = i;
        }
        j++;
        i++;
    }
    cout<<"indices of Maximum Sum : "<<maxIndex<<" to "<<maxIndex+2<<endl;
    cout<<"Max Sum : "<<maxSum;

    //Time Complexity = O(n)
}
int main(){
    int n = 9;
    vector<int> arr = {7,1,2,5,8,4,9,3,6};
    int k = 3;
    maxSumSubArray(arr,k);
}
