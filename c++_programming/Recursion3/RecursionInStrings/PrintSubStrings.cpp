#include<iostream>
#include<vector>
using namespace std;
void substrings(string emp , string orig)
{
    if(orig.length()==0) 
    {
        cout<<"["<<emp<<"]";
        return ;
    }
   
    substrings(emp,orig.substr(1));
    substrings(emp+orig[0],orig.substr(1));
}
void subStrings2(string emp , string orig , int idx)
{
    if(idx==orig.length()) 
    {
        cout<<"["<<emp<<"]";
        return ;
    }
    char ch = orig[idx];
    subStrings2(emp,orig,idx+1);
    subStrings2(emp+ch,orig,idx+1);
}
int main(){
    string str = "aab";
    cout<<endl;
    subStrings2("",str,0);
}
