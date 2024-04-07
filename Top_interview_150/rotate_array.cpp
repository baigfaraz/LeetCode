#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
        k = k % n;
    for (int i = 0; i < k; i++)
    {
        int temp = nums[n-1];
        for (int j = n -1; j > 0; j--)
        {
            nums[j] = nums[j-1];
        }
        nums[0] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);

    return 0;
}