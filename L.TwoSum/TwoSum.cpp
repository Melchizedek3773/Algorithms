#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        int buff = 0;
        for (int i = 0; i <= nums.size(); i++)
        {
            if (nums[i] + nums[i+1] == target)
                return {i, i+1};
        }
        return {};
    }
};
