// Monotonic Array
//Leetcode Problem
/*An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

Example :

Input: nums = [1,2,2,3]
Output: true*/

class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        vector<int> solution;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size()-1; i++)
        {
            if (nums[i] <= nums[i + 1])
                count1++;

            if (nums[i] >= nums[i + 1])
                count2++;
        }
        if (count1 == nums.size()-1 || count2 == nums.size()-1)
            return true;
        else
            return false;
    }
};
