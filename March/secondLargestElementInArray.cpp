#include <iostream>
using namespace std;

// Brute approach
void secondLargestElementInArray1(int arr[], int n)
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

// Better aproach
void secondLargestElementInArray2(int arr[], int n)
{
    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int secondLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest Number is : " << secondLargest << endl;
}

// optimal aproach
void secondLargestElementInArray3(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            int temp = largest;
            largest = arr[i];
            secondLargest = temp;
        }
    }

    cout << "Largest Number is : " << largest << endl;
    cout << "Second Largest Number is : " << secondLargest << endl;
}

int main()
{
    int arr[11] = {3, 6, 1, 5, 2, 7, 3, 8, 8, 3, 6};
    secondLargestElementInArray3(arr, 10);
    return 0;
}