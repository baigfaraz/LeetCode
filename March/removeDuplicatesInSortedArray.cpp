#include <iostream>
using namespace std;

void removeDuplicateInSortedArray(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    cout << "Array is : ";
    for (int k = 0; k <= i; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    cout << (i + 1);
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5};
    removeDuplicateInSortedArray(arr, 9);

    return 0;
}