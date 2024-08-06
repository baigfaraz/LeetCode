#include <iostream>
using namespace std;

void largetElementInArray(int arr[], int n)
{
    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << " Largest Number in an array is " << largest;
}

int main()
{
    int arr[10] = {3, 6, 1, 5, 2, 7, 3, 8, 3, 6};
    largetElementInArray(arr,10);

    return 0;
}