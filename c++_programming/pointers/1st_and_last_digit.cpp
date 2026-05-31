#include<iostream>
using namespace std;
void func(int n , int* p1 , int* p2)
{
    *p2 = n % 10; // this calculate last digit 
    while(n>9)
    {
        n/=10;
    }
    *p1 = n;
}
int main(){

    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int firstdigit , lastdigit;
    int* p1 = &firstdigit;
    int* p2 = &lastdigit;
    func(n , p1 , p2);
    cout<< "First digit of "<< n <<" is : "<<firstdigit<<endl;
    cout<< "Last digit of "<< n <<" is : "<<lastdigit;
    return 0;
}