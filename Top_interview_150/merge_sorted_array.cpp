#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> nums1, int m, vector<int> nums2, int n)
{
    int nums1Size = m + n;
    int nums2Size = n;

    for (int i = 0; i < nums2Size; i++)
    {
        if (m <= nums1Size)
        {
            nums1[m] = nums2[i];
            m++;
        }
    }

    sort(nums1.begin(), nums1.end());

    for (int i = 0; i < nums1Size; i++)
    {
        cout << nums1[i] << " ";
    }
}

int main()
{
    vector<int> nums1 = {0};
    int m = 0;
    vector<int> nums2 = {1};
    int n = 1;
    merge(nums1, m, nums2, n);
    return 0;
}