#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
    string str = "the the in the sentence is a mistake.";
    // cout << "enter your string : ";
    // getline(cin, str);

    int n = str.length();
   
    cout << "your string is : " << str << endl;

    stringstream s(str);
    vector<string> v;
    string temp;
    while (s >> temp)
    {
        v.push_back(temp);
    }
    cout<<endl;
    int mx = 1;
    int count = 1;
    sort(v.begin() , v.end());
    for(int i = 0 ; i<v.size() ; i++)
    {
        if(v[i] == v[i-1])
        count++;
        else count = 1;
        mx = max(mx,count);
    }
    count = 1;
    cout<<"Most occuring word is : ";
    for(int i = 0 ; i<v.size() ; i++)
    {
        if(v[i] == v[i-1])
        count++;
        else count = 1;
        if(count == mx)
        cout<<v[i]<<" -> " <<mx<<" times "<<endl;
    }
}
