#include <iostream>
using namespace std;
int main()
{
    float principal = 15000;
    float rate = 3.5;
    float time = 5;
    float si = (principal * rate * time) / 100;
    cout << si << endl;
}