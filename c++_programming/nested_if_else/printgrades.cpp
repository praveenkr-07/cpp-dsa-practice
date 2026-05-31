#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your Marks  : ";
    cin >> marks;

    if (91 <= marks && marks <= 100)
    {
        cout << "excellent";
    }

    else if (81 <= marks && marks <= 90)
    {
        cout << "very good";
    }

    else if (71 <= marks && marks <= 80)
    {
        cout << "good";
    }

    else if (61 <= marks && marks <= 70)
    {
        cout << "can do better ";
    }

    else if (51 <= marks && marks <= 60)
    {
        cout << "average";
    }

    else if (40 <= marks && marks <= 50)
    {
        cout << "below average";
    }

    else
    {
        cout << "fail";
    }
}
