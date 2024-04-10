#include <iostream>
using namespace std;

int lastWordLength(string s)
{
    int lengthOfWord = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (lengthOfWord > 0 && s[i] == ' ')
        {
            return lengthOfWord;
        }
        else if (s[i] == ' ')
        {
            continue;
        }
        lengthOfWord++;
    }
    return lengthOfWord;
}

int main()
{
    cout << lastWordLength("hammad adrees     ");
    return 0;
}