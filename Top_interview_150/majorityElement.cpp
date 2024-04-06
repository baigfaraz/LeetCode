#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums) {
    int majority = nums[0];
    int count = 1;
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == majority)
            count++;
        else {
            count--;
            if (count == 0) {
                majority = nums[i];
                count = 1;
            }
        }
    }
    
    return majority;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums) << endl;

    return 0;
}
