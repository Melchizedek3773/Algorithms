#include <iostream>
#include <vector>

int TwoOfThree(std::vector<int>& nums, int index)
{
    int buff = 0;
    for (int i = 0; i < index; i++)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0 || i == 1 || i == 2)
                std::cout << nums[i] << " ";
            else
            {
                buff += nums[i]*nums[i+1];          
            }
        }
    }
    return buff;
}
int main()
{
    std::vector<int> nums;
    
    int index;

    for (int i = 0; i < 3; i++)
        std::cin >> nums[i] >> index;
    
    std::cout << TwoOfThree(nums, index);
    return 0;
}
