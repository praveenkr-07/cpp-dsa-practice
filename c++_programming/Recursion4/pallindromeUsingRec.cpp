#include<iostream>
#include<vector>
using namespace std;
bool isPallindrome(string str, int st , int end)
{
    if(st>end) return true;
    if(str[st]!=str[end]) return false;
    else return isPallindrome(str,st+1,end-1);
}

int main(){
    string str = "recursion";
    int n = str.length();
    cout<<isPallindrome(str,0,n-1);
    cout<<endl;
}
