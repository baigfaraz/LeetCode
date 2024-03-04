#include <iostream>
using namespace std;

void rotateArray(int arr[], int arrSize, int k)
{
    for (int i = 0; i < k; i++)
    {
        for (int j = (arrSize - 1); j > 0; j--)
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
        }
    }

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {-1,-100,3,99};
    rotateArray(arr, 4, 2);

    return 0;
}