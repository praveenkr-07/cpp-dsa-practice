#include<iostream>
#include<string>
using namespace std;
void skipChar(string emp , string orig ,int idx)
{
    if(idx==orig.length()) {
        cout<<emp<<" ";
        return;
    }
    char ch = orig[idx];
    if(ch != 'a') skipChar(emp+ch,orig,idx+1);
    else skipChar(emp,orig,idx+1);
}
int main()
{
    string str = "programming";
    skipChar("",str, 0);
} 