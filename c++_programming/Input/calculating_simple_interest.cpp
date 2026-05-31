#include <iostream>
using namespace std;
int main()
{
    float principal;
    float rate ;
    float time ;
    cout<<"Enter your principal amount : ";
    cin>>principal;
    cout << "Enter your rate of interest : ";
    cin >> rate;
    cout << "Enter time in years : ";
    cin >> time;
    float si = (principal * rate * time) / 100;
    cout<<"simple interest on your Principal amount is " << si << endl;
}