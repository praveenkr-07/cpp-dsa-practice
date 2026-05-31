// Write a function to find the
// longest common prefix string
// amongst an array of strings.
// If there is no common prefix, 
// return an empty string "".
// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string LongestCommonPrefx(vector<string>& str);
string LongestCommonPrefx(vector<string>& str){
    int n = str.size();
    string ans = "";
    sort(str.begin(),str.end());
    string first = str[0];
    string last = str[n-1];
    for(int i = 0 ; i<min(first.size() , last.size());i++)
    {
        if(first[i] == last[i])
        {
            ans+=first[i];
        }
        else return ans;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number of words you want in your string : ";
    cin>>n;
    vector<string> s(n);
    
    cout<<"Enter your strings : ";
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        s.push_back(s[i]);
    }

    cout<<"Enter your strings : ";
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Longest common Prefix in [ ";
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<"] is : " <<LongestCommonPrefx(s);

}
