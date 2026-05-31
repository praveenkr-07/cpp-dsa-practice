#include<iostream>
#include<string>
using namespace std ;
int main(){
// '\0' or null character is present at the end of the strings it terminates the string
//    char ch ='\0';
//    cout<<int(ch);
char str[5] = { 'a' , 'b',  'c' , 'd' , 'e'};
// cout<<str[5];
// string str = "abcde";
for(int i = 0 ; str[i] != '\0' ; i++)
{
    cout<<str[i]<<" ";
}
}