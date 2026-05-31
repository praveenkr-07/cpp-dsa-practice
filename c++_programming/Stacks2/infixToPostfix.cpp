#include <iostream>
#include <stack>
#include <string>
using namespace std;
int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    return 2;
}
string solve(string val1, string val2, char ch)
{
    string s = "";

    s += val1;
    s += val2;
    s += ch;

    return s;
}
string infixToPostfix(string str)
{

    int n = str.length();
    stack<string> val;
    stack<char> op;
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        if (ch == ' ')
            continue;

        else if (isdigit(str[i]))
        {

            int num = 0;

            while (i < n && isdigit(str[i]))
            {
                num = num * 10 + (str[i] - '0');
                i++;
            }

            val.push(to_string(num));
            i--;
        }

        else
        {
            if (op.size() == 0)
                op.push(ch);
            else if (ch == '(')
                op.push(ch);
            else if (op.top() == '(')
                op.push(ch);
            else if (ch == ')')
            {
                while (op.top() != '(')
                {
                    char oper = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, oper);
                    val.push(ans);
                }
                op.pop();
            }
            else if (priority(ch) > priority(op.top()))
                op.push(ch);
            else
            { // priority(ch) <= priority(op.top())
                while (op.size() > 0 && priority(ch) <= priority(op.top()))
                {
                    char oper = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, oper);
                    val.push(ans);
                }
                op.push(ch);
            }
        }
    }
    while (op.size() > 0)
    {
        char oper = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1, val2, oper);
        val.push(ans);
    }
    return val.top();
}

int main(){
    string str = "(7+9)*4/8-3";
    cout << infixToPostfix(str);
}