#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter No. of Rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = i;
    for (int l = 1; l <= i; l++)
    {
        cout << a;
        a--;
    }
    cout << endl;
    }
 
}
