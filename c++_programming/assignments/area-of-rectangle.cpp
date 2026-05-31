#include <iostream>
using namespace std;
int main()
{
    float length , breadth , area , perimeter;

    cout<<"Enter the length of Reactangle : ";
    cin>>length;
    cout << "Enter the breadth of Reactangle : ";
    cin >> breadth;

    area = length*breadth;
    perimeter = 2*(length+breadth);

    if (area > perimeter)
        cout << "area > perimeter";
    else if (area = perimeter)
        cout << "area = perimeter";
    else
        cout << "area > perimeter";
}