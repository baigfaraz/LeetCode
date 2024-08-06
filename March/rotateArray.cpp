#include <iostream>
using namespace std;

// void rotateArray(int arr[], int arrSize, int k)
// {
//     for (int i = 0; i < k; i++)
//     {
//         for (int j = (arrSize - 1); j > 0; j--)
//         {
//             int temp = arr[j];
//             arr[j] = arr[j - 1];
//             arr[j - 1] = temp;
//         }
//     }

//     for (int i = 0; i < arrSize; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// 0 1 2 3 4 5 (n-1)
// 1 2 3 4 5 6 7
// 7 1 2 3 4 5 6

void rotateArray(int arr[], int arrSize, int k)
{

    k = k % arrSize;

    for (int i = 0; i < k; i++)
    {
        int temp = arr[arrSize - 1];
        for (int j = (arrSize - 1); j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    rotateArray(arr, 7, 8);

    return 0;
}