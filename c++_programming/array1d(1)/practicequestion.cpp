#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the number of students : ";
    cin>>size;
    cout<<endl;

int marks[size];
cout<<"Marks of the students are : ";
for(int i = 0 ; i<size ; i++)
{
    cin>>marks[i];
}
cout<<endl;
for(int i = 0 ; i<size ; i++)
{
    if(marks[i] < 35 )
    cout<<"Roll no. of the student is : "<<i<<""<<endl;
}
}