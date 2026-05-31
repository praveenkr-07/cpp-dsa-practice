#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    cout << "Parveen Kumar  24/IT/135" << endl;
    string str;
    cout << "Enter your string : ";
    getline(cin, str);
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    string result;
    bool found = false;
    for (int i = 0; i < str.size(); i++)
    {
        if (!found && str[i] == ch)
        {
            found = true; // skip this character (first occurrence)
            continue;
        }
        result += str[i];
    }
    cout << result << endl;
}
                    
