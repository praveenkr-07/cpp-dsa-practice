#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isBalanced(string& s) {
        int n = s.size();
        stack<char> st;
        for(int i = 0 ; i<n ; i++)
        {
            char ch = s[i];
            if(ch=='('||ch=='{'||ch=='[') st.push(ch);
            else
            {
                if(st.size()==0) return false;
                else if( ch==')' && st.top() == '(' 
                || ch=='}' && st.top() == '{' 
                || ch==']' && st.top() == '[') st.pop();
                else return false;
            }
        }
        if(st.size()==0) return true;
        else return false;
    }
int main(){
    string str = "()[]{}]";
    cout<<isBalanced(str);
}