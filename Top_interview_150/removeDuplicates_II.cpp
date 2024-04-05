#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
        return 0;

    int count = 1;
    int index = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
            if (count <= 2)
            {
                nums[index] = nums[i];
                index++;
            }
        }
        else
        {
            count = 1;
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    cout << removeDuplicates(nums);

    return 0;
}
