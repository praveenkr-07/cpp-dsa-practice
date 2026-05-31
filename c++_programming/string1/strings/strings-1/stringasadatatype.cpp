// #include<iostream>
// #include<string>
// using namespace std ;
// int main(){
//     string str = "praveen kumar";
//     cout<<str.size();
//     string str = "praveen";
//     cout  << str[7] << endl;

//     // int n , count = 0 ;
//     // cout<<"Enter length of your string -> ";
//     // cin>>n;

//     // cout<<"Enter your string -> ";
//     // char str[n];
//     // cin>>str;
//     // for(int i = 0 ; str[i] != '\0' ; i++ )
//     // {
//     //     if(str[i] =='a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' )
//     //     {
//     //         count++;
//     //     }
//     // }
//     // cout<<"No. of vowels in the your string is -> "<<count;
// }
#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter the size of your string : ";
    cin >> n;

    char str[n];
    cout << "Enter a string : ";
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            str[i] = 'a';
    }

    cout << "Updated string is : ";
    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }
}