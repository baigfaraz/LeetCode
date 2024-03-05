#include <iostream>
using namespace std;

void moveZeroesToEnd(int arr[], int arrSize)
{
    // int sizeOfNonZero = 0;
    // for (int i = 0; i < arrSize; i++)
    // {
    //     if (arr[i] != 0)
    //         sizeOfNonZero = sizeOfNonZero + 1;
    // }
    // int temp[sizeOfNonZero];
    // int j = 0;
    // for (int i = 0; i < arrSize; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         temp[j] = arr[i];
    //         j++;
    //     }
    // }

    // for (int i = 0; i < arrSize; i++)
    // {
    //     if (i < sizeOfNonZero)
    //     {
    //         arr[i] = temp[i];
    //     }
    //     else
    //     {
    //         arr[i] = 0;
    //     }
    // }

    // for (int i = 0; i < arrSize; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    int j = -1;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j != -1)
    {
        for (int i = j + 1; i < arrSize; i++)
        {
            if (arr[i] != 0)
            {
                arr[j] = arr[i];
                arr[i] = 0;
                j++;
            }
        }
    }

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 0, 3, 0, 4, 0, 0, 0, 3, 4, 5, 6};
    moveZeroesToEnd(arr, 14);

    return 0;
}