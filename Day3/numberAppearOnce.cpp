#include <iostream>
#include <vector>
using namespace std;

void numberAppearOnce(vector<int> arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j] )
                count++;
            if(count == 2)
                break;
        }
        if (count == 1)
        {
            cout << "Number Appears one time is : " << arr[i];
            break;
        }
        else
            count = 0;
    }
}

int main()
{
    vector<int> arr = {4, 4, 1, 2, 1, 2, 3, 1, 1};
    numberAppearOnce(arr);

    return 0;
}
