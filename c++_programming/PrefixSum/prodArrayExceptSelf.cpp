#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf( vector<int> &v){
int n = v.size();
vector<int> pre(n);
int prod = pre[0];
pre[0] = 1;
// prefix product array
for(int i = 1 ; i<n ; i++){
    pre[i] = prod;
    prod*= v[i];
}

// suffix product + ans array modification
prod = v[n-1];
for(int i = n-2 ; i>=0 ; i--)
{
    pre[i]*=prod;
    prod*=v[i];
}
for(int i = 0 ; i<n;i++)
{
    cout<<pre[i]<<" ";
}
return pre;

}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for(int i = 0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    productExceptSelf(v);

   
}