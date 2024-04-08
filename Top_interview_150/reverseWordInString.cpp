#include <iostream>
#include <vector>
#include <stack>
using namespace std;

string reverseWords(string s)
{
    stack<string> mystack;
    string res = "";
    string newString = "";

    int startIndex = 0;
    while (startIndex < s.size() && s[startIndex] == ' ')
        startIndex++;

    for (int i = startIndex; i < s.size(); i++)
    {
        if (s[i] != ' ')
            res = res + s[i];
        if ((res.size() > 0 && s[i] == ' ') || i == s.size() - 1)
        {
            mystack.push(res);
            res = "";
        }
    }

    while (!mystack.empty())
    {
        newString = newString + mystack.top();
        mystack.pop();
        if (!mystack.empty())
            newString = newString + " ";
    }

    return newString;
}

int main()
{
    string s = "  hello world  ";
    reverseWords(s);
    return 0;
}
