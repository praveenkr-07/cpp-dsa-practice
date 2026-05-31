#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,15};
    
    for(int i = 1 ; i<v.size() ; i++) v[i] = v[i] + v[i-1];

    for(int i = 0 ; i <v.size() ; i++)
    cout<<v[i]<<" ";

}