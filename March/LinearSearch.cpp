#include<iostream>
using namespace std;

void linearSearch(int arr[] , int arrSize , int number)
{
    int index;
    for (int i = 0; i < arrSize; i++)
    {
        if(arr[i] == number)
        {
            index = i;
            break;
        }
    }
    cout << "Number present at "<< index<<" index";
}

int main()
{
    int number;
    int arr[] = {1, 2, 3, 3, 4, 5, 2, 6, 7, 8, 9, 10};
    cout << "Enter number that want to search : ";
    cin >> number;

    linearSearch(arr , 12 , number);

    return 0;
}