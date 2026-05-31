// to_string() || in parenthesis -> intege
//convert integer to string
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n = 12349;
    string s = to_string(n); // it converts integer to string
    cout<<"Number of digits in " << n<< " -> "<<s.size();
}