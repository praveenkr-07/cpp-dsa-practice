#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    int* p = &x;
    cout<<&x<<endl;
    // (*p)++;

    cout <<(p)++<< ' '<< (*p)++<<endl;
    cout << (*p);
    return 0;
    }