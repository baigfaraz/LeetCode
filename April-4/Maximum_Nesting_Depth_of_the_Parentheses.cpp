#include <iostream>
using namespace std;
#include <stack> // Include the stack header

int maxDepth(string s)
{
    int count = 0;
    int max_num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            count++;
            if (count > max_num)
            {
                max_num++;
            }
        }
        else if (s[i] == ')')
        {
            count--;
        }
    }

    return max_num;
}

int main()
{

    string s = "(1)+((2))+(((3)))";
    cout << maxDepth(s);
    return 0;
}