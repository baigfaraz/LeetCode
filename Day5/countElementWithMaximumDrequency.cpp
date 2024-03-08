#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int searchNumber(vector<int> &arr, int number)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == number)
        {
            return 1;
        }
    }
    return 0;
}

void countElementWithMaximumDrequency(vector<int> &arr)
{
    int count = 0;
    int temp = 0;
    vector<int> mostFrequentNumber;
    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                temp++;
            }
        }

        if (temp > count || temp == count)
        {
            if (searchNumber(mostFrequentNumber, arr[i]) == 0)
            {
                mostFrequentNumber.push_back(arr[i]);
            }
            count = temp;
            temp = 0;
        }
    }
    cout << "Most Frequent Number is : ";
    for (int i = 0; i < mostFrequentNumber.size(); i++)
    {
        cout << mostFrequentNumber[i] << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 1, 4};
    countElementWithMaximumDrequency(arr);
    return 0;
}