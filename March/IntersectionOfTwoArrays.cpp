#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int searchNumber(vector<int> &arr, int number)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == number)
            return 1;
    }
    return 0;
}

void interSectionOfTwoAarrays(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> intersectionArray;
    int i = 0;

    while (i < arr1.size())
    {
        int count1 = count(arr2.begin(), arr2.end(), arr1[i]);
        if (count1 > 0 && searchNumber(intersectionArray, arr1[i]) == 0)
        {
            intersectionArray.push_back(arr1[i]);
        }
        i++;
    }

    for (int i = 0; i < intersectionArray.size(); i++)
    {
        cout << intersectionArray[i] << " ";
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 6};
    vector<int> arr2 = {1, 3, 4, 5};
    interSectionOfTwoAarrays(arr1, arr2);
    return 0;
}