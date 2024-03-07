#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Declare Sort before quickSort
int Sort(vector<int> &arr, int low, int high);

int quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partition = Sort(arr, low, high);
        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);
    }
}

int Sort(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

int main()
{
    vector<int> arr = {5, 1, 1, 2, 0, 0 , 2, 10 , 9};
    quickSort(arr, 0, (arr.size() - 1));
    cout << "Sorted Array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
