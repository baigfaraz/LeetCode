#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

string minRemoveToMakeValid(string s)
{
    stack<int> st;
    vector<bool> marked(s.size(), false);

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else if (s[i] == ')')
        {
            if (!st.empty())
            {
                st.pop();
            }
            else
            {
                marked[i] = true;
            }
        }
    }

    while (!st.empty())
    {
        marked[st.top()] = true;
        st.pop();
    }

    string result;
    for (int i = 0; i < s.size(); ++i)
    {
        if (!marked[i])
        {
            result += s[i];
        }
    }

    return result;
}

int main()
{
    cout << minRemoveToMakeValid("lee(t(c)o)de)") << endl;
    cout << minRemoveToMakeValid("a)b(c)d") << endl;
    cout << minRemoveToMakeValid("))((") << endl;

    return 0;
}
