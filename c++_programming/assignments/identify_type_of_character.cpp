#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character : ";
    cin >> ch;

    int i = (int)ch;

    if (i >= 97 && i <= 122 || i >= 65 && i <= 90)
    {
        if (i == 65 || i == 69 || i == 73 || i == 79 || i == 85)
        {
            cout << "your character is  an upper case vowel ";
        }

        else if (i == 97 || i == 101 || i == 105 || i == 111 || i == 117)
        {
            cout << "your character is  a lower case vowel ";
        }

        else
        {
            cout << "your character is a consonant";
        }
        // cout<<"your character is an alphabet";
    }

    else if(48<= i && i<=58)
    {
        cout << "your character is a numeric";
    }

    else
    {
        cout << "your character is a special character ";
    }
}