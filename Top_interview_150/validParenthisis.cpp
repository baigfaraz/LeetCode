#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> myStack;
    bool flag = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            myStack.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (myStack.empty() || myStack.top() != '(')
            {
                flag = false;
                break;
            }
            myStack.pop();
        }
        else if (s[i] == '}')
        {
            if (myStack.empty() || myStack.top() != '{')
            {
                flag = false;
                break;
            }
            myStack.pop();
        }
        else if (s[i] == ']')
        {
            if (myStack.empty() || myStack.top() != '[')
            {
                flag = false;
                break;
            }
            myStack.pop();
        }
    }

    if (!myStack.empty())
        flag = false;
    return flag;
}

int main()
{
    string s = "(";
    cout << isValid(s);
    return 0;
}