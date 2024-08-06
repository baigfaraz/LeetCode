#include <iostream>
#include <vector>
#include <algorithm>
#include <algorithm>
using namespace std;

void countElementWithMaximumDrequency(vector<int> &arr)
{
    int count = 0;
    vector<int> mostFrequentNumber;
    for (int i = 0; i < arr.size(); i++)
    {
        int temp = std ::count(arr.begin(), arr.end(), arr[i]);
        if (temp > count)
        {
            count = temp;
            mostFrequentNumber.clear();
            mostFrequentNumber.push_back(arr[i]);
        }
        else if (temp == count)
        {
            mostFrequentNumber.push_back(arr[i]);
        }
    }
    cout << mostFrequentNumber.size();
}

int main()
{
    vector<int> arr = {10, 12, 11, 9, 6, 19, 11};
    countElementWithMaximumDrequency(arr);
    return 0;
}