#include<iostream>
#include<vector>
using namespace std;
void printReverse(vector<int> &v, int start)
{
    if(start > v.size()-1) return;
    printReverse(v,start+1);
    cout<<v[start]<<" ";

}
int main()
{
    int n;
    cout<<"Enter the size of your vector : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elements of vector : ";
    for(int i = 0;i<n;i++)
    {   int x;
        cin>>x;
        v[i]=x;
    }
    cout<<"Elements in Reverse Order : ";
    printReverse(v,0);
}
