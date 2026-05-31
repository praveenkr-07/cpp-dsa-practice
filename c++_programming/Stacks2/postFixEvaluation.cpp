#include <iostream>
#include <stack>
#include <string>
using namespace std;
int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '*')
        return val1 * val2;
    else if (ch == '-')
        return val1 - val2;
    return val1 / val2;
}
int postfixEvaluation(string str)
{
    int n = str.length();
    stack<int> val;
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];

        if (ch == ' ')
            continue;

        if (isdigit(ch))
        {
            val.push(ch - '0');
        }

        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1, val2, ch);
            val.push(ans);
        }
    }
    return val.top();
}

int main()
{
    string str = "79+4*8/3";
    cout << postfixEvaluation(str);
}