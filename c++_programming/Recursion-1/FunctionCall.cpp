#include<iostream>
using namespace std;
void lun();
void fun()
{
    cout<<"Hello fun is calling !! "<<endl;
    return;
}
void lun()
{
    cout<<"Hello lun is calling !!"<<endl;
    fun();
}
int main()
{
    lun();
    fun();
}