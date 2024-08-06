#include <iostream>
#include <vector>
using namespace std;

void numberOfConsectiveOnes(vector<int> arr)
{
    int arrSize = arr.size();
    int count = 0;
    int temp = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == 1)
        {
            temp++;
        }
        else
        {
            if (temp > count || temp == count)
            {
                count = temp;
                temp = 0;
            }
        }
    }
    cout << count;
}

int main()
{
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 0, 1};
    numberOfConsectiveOnes(arr);

    return 0;
}