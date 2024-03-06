#include <iostream>
#include <vector>
using namespace std;

void findMissingNumber()
{
}

int main()
{
    vector<int> arr = {3, 0, 2, 5, 6, 1 , 4, 8};
    int arrSize = arr.size();

    for (int i = 0; i <= arrSize; i++)
    {
        for (int j = 0; j < arrSize; j++)
        {
            if (i == arr[j])
            {
                break;
            }
            else if (i != arr[j] && j == (arrSize - 1))
            {
                cout << "Missing Number is : " << i;
            }
        }
    }

    return 0;
}