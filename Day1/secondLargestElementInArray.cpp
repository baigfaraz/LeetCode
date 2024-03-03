#include <iostream>
using namespace std;

void secondLargestElementInArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int secondLargest;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != arr[i - 1])
        {
            secondLargest = arr[i - 1];
            break;
        }
    }

    cout << "Second Largest Number is : " << secondLargest << endl;
}

int main()
{
    int arr[11] = {3, 6, 1, 5, 2, 7, 3, 8, 8, 3, 6};
    secondLargestElementInArray(arr, 10);
    return 0;
}