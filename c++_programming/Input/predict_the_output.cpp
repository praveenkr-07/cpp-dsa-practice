#include <iostream>
using namespace std;
int main()
{
    // bool p = false;
    // bool q = false;
    // bool r = true;
    int p = 1;
    int q = 2;
    int r = 2;
    
    cout<<(p==q==r)<<endl;// output will be zero

    cout<<(p==(q==r))<<endl;// output will  be one
    
    // generally relational operators works from left to right 
    // if we use the parenthesis the that operator will be
    // execute first which is in the parenthesis
}
