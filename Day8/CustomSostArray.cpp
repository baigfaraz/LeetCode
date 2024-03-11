#include <iostream>
#include <algorithm>
using namespace std;

string customSortString(string order, string s)
{
    auto customComparator = [&](char a, char b)
    {
        return order.find(a) < order.find(b);
    };
    sort(s.begin(), s.end(), customComparator);
    return s;
}

int main()
{
    string order1 = "cba";
    string s1 = "abcd";
    cout << customSortString(order1, s1) << endl;

    return 0;
}
