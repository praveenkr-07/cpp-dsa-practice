#include<iostream>
using namespace std;
int main()
{
    float radius, area, circum;
    cout << "Enter the radius of circle : ";
    cin >> radius;

    area = 3.14 * radius * radius;
    circum = 2 * 3.14 * radius;

    cout << "area of circle = ";
    cout << area << endl;
    cout << "circumference of circle = ";
    cout << circum;

    cout << endl;

    if (area > circum)
        cout << "area > perimeter";

    else if (area < circum)
    {
        cout << "area < perimeter";
    }

    else
        cout << "area = perimeter";
}