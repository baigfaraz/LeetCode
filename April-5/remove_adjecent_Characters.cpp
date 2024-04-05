#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

bool isUpper(char c) { return c >= 'A' && c <= 'Z'; }

bool isLower(char c) { return c >= 'a' && c <= 'z'; }

string makeGood(string s)
{
    stack<char> mystack;
    for (int i = 0; i < s.size(); i++)
    {
        if (mystack.empty())
            mystack.push(s[i]);
        else
        {
            if (isLower(mystack.top()) && isUpper(s[i]) && tolower(mystack.top()) == tolower(s[i]))
                mystack.pop();
            else if (isUpper(mystack.top()) && isLower(s[i]) && tolower(mystack.top()) == tolower(s[i]))
                mystack.pop();
            else
                mystack.push(s[i]);
        }
    }

    string res = "";
    while (!mystack.empty())
    {
        res = mystack.top() + res;
        mystack.pop();
    }
    cout << res << endl;
    return res;
}

int main()
{
    string s = "mC";
    makeGood(s);

    return 0;
}