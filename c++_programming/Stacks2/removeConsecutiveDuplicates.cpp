
#include<iostream>
#include<string>
#include<stack>
using namespace std;
string removeConsecutiveCharacter(string& str) {
        int n = str.size();
        string ans = "";
        stack<char>st;
        for(int i = 0 ; i<n ; i++)
        {
            char ch = str[i];
            if(st.size()== 0 || st.top() != ch) 
            {
                ans+=ch;
                st.push(ch);
                
            }
            
        }
        return ans;
    }
    int main(){
    string str = "bbbbabccccddcba";
    cout<<removeConsecutiveCharacter(str);
}