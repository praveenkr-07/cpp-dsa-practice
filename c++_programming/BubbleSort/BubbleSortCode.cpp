#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = { 5,4,6,3,1,2};
    for (int i = 0; i < v.size() ; i++) // n-1 passes 
    {
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
    // Bubble Sorting -> Time complexity =  O(n^2)
    // Bubble Sorting -> Space complexity = O(1)
    for (int i = 0; i < v.size() - 1; i++) // n-1 passes 
    {
        // traverse
        for(int j = 0 ; j<v.size()-1-i ; j++)
        if(v[j] > v[j+1])
        {
            int temp = v[j];
            v[j] = v[j+1];
            v[j+1] = temp;
        }
    }
    for (int i = 0; i < v.size(); i++) // n-1 passes 
    {
        cout<<v[i]<<" ";
        
    }
}