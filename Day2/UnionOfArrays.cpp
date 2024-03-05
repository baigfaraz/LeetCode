#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void unionOfTwoSortedArrays(vector<int> arr1, vector<int> arr2)
{
    int arr1Size = arr1.size();
    int arr2Size = arr2.size();
    vector<int> unionArray;

    int i = 0;
    int j = 0;
    while (i < arr2Size && j < arr2Size)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArray.size() == 0 || unionArray.back() != arr1[i])
            {
                unionArray.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArray.size() == 0 || unionArray.back() != arr2[j])
            {
                unionArray.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (j < arr2Size)
    {
        if (unionArray.size() == 0 || unionArray.back() != arr2[j])
        {
            unionArray.push_back(arr2[j]);
        }
        j++;
    }

    while (i < arr1Size)
    {
        if (unionArray.size() == 0 || unionArray.back() != arr1[i])
        {
            unionArray.push_back(arr1[i]);
        }
        i++;
    }

    for (int i = 0; i < unionArray.size(); i++)
    {
        cout << unionArray[i] << " ";
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 9, 9, 11};
    vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7};

    unionOfTwoSortedArrays(arr1, arr2);

    return 0;
}