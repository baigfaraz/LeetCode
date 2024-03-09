#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumCommonValue(vector<int> arr1, vector<int> arr2)
{
    if (arr1.front() < arr2.front())
    {
        for (int i = 0; i < arr1.size(); i++)
        {
            if (arr1[i] < arr2.front())
            {
                continue;
            }
            else
            {
                int countValue = count(arr2.begin(), arr2.end(), arr1[i]);
                if (countValue > 0)
                {
                    return arr1[i];
                }
            }
        }

        return -1;
    }
    else
    {
        for (int i = 0; i < arr2.size(); i++)
        {
            if (arr2[i] < arr1.front())
            {
                continue;
            }
            else
            {
                int countValue = count(arr1.begin(), arr1.end(), arr2[i]);
                if (countValue > 0)
                {
                    return arr2[i];
                }
            }
        }

        return -1;
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 6};
    vector<int> arr2 = {2, 3, 4, 5};

    int result = minimumCommonValue(arr1, arr2);
    cout << "Minimum Common Value in both arrays is : " << result;
    return 0;
}