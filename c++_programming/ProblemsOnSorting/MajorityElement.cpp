// leetcode 169
//The majority element is the element that appears more than ⌊n / 2⌋ times. 
// You may assume that the majority element always exists in the array.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the size of your array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements in your array : ";
    for(int i = 0 ; i<n ; i++)
    {
        cin>>v[i];
        v.push_back(v[i]);
    }
    cout<<" Array is : ";
    for(int i = 0 ; i<n ; i++)
    {
       cout<<v[i]<<" ";
    }

    sort(v.begin(),v.end());
    cout<<endl<<"Most frequent element in your array is : "<<v[n/2];

}
