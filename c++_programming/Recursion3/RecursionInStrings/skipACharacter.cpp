#include<iostream>
#include<vector>
using namespace std;
void SkipChar(string s , string original , int idx){
    if(idx==original.length()){
        cout<<s;
        return;
    }
    char ch = original[idx];
    if(original[idx]=='a') SkipChar(s,original,idx+1);
    else SkipChar(s+ch,original,idx+1);
}
int main(){
    string str = "praveen";
    SkipChar("",str,0);
}