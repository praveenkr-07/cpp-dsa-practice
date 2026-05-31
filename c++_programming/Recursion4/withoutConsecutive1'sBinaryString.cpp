#include<iostream>
#include<vector>
using namespace std;
void generateBinary(int n , string str){
     if(str.length()==n) 
     {
        for(int i = 0 ; i<str.length();i++)
        {
            cout<<str[i];
        }
        cout<<endl;
        return;
     }
    generateBinary(n , str+"0");
    if(str == "" || str[str.length()-1] == '0')generateBinary(n , str+"1");

}

int main(){
    int num = 2;
    generateBinary(num,"");
}
