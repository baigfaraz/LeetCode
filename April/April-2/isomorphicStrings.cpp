#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    const int arrSize = 256;

    char map1[arrSize] = {0};
    char map2[arrSize] = {0};

    for (size_t i = 0; i < s.length(); ++i)
    {
        char char1 = s[i];
        char char2 = t[i];

        if (map1[char1] != 0 && map1[char1] != char2)
        {
            return false;
        }

        if (map2[char2] != 0 && map2[char2] != char1)
        {
            return false;
        }

        map1[char1] = char2;
        map2[char2] = char1;
    }

    return true;
}

int main()
{
    string s1 = "bbbaaaba";
    string s2 = "aaabbbba";
    cout << isIsomorphic(s1, s2) << endl;

    return 0;
}