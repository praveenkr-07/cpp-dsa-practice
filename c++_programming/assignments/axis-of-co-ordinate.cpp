#include <iostream>
using namespace std;
int main()
{
    int x , y;
    cout << "Enter the abscissa of your point : ";
    cin>>x;

    cout << "Enter the ordinates of your point : ";
    cin >> y;

    if(x==0 && y==0)
    cout<<"your point lies on origin";

    else if(x==0 && y != 0)
    cout << "your point lies on y-axis";

    else if(x != 0 && y == 0)
    cout << "your point lies on x-axis";

    else if(x!=0 && y!=0)
    cout << "your point lies in x-y plane";
}