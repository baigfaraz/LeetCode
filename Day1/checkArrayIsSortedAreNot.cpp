#include <iostream>
using namespace std;

void checkArrayIsSortedAreNot(int arr[], int n)
{
    int smallest = arr[0];
    bool status = true;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= smallest)
        {
            smallest = arr[i];
        }
        else
        {
            status = false;
            break;
        }
    }
    cout << "Array sorted status : " << status << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 5, 2, 6, 7, 8, 9, 10};
    checkArrayIsSortedAreNot(arr, 9);

    return 0;
}