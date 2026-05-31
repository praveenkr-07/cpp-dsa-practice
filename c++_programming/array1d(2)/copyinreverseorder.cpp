#include <iostream>
#include <vector>
using namespace std;
vector<int> reversethearray(vector<int> v){
    vector<int> v1(v.size());

    for(int i = 0 ; i< v.size() ; i++)
    {
        v1[i] = v[ v.size() - 1 - i ] ;
    }

    // cout<<"Reversed array is : ";
    // for(int i = 0 ; i < v.size() ; i++)
    // {
    //     cout<<v1[i]<<" ";
    // }
    return (v1);
}
int main()
{

    vector<int> v;
    int n;
    cout << "Enter array size : ";
    cin >> n;
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    // vector<int> v2(n);
   vector<int>  y = reversethearray(v);

cout << "Reversed array is: ";
for (int i = 0; i < y.size(); i++) {
    cout << y[i] << " ";
}

    return 0;
}