/* Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Example 2:

Input: nums = []
Output: []
Example 3:

Input: nums = [0]
Output: []
*/
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        if (nums.size() < 3)
            return ans;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (nums[i] > 0)
                break;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int sum = 0 - nums[i];
            int l = i + 1;
            int r = nums.size() - 1;
            while (l < r)
            {
                if (nums[l] + nums[r] == sum)
                {
                    ans.push_back(vector<int>({nums[i], nums[l], nums[r]}));
                    ++l;
                    --r;
                    while (nums[l] == nums[l - 1] && l < r)
                    {
                        ++l;
                    }
                    while (nums[r] == nums[r + 1] && r > l)
                    {
                        --r;
                    }
                }
                else if (nums[l] + nums[r] < sum)
                {
                    ++l;
                }
                else
                {
                    --r;
                }
            }
        }
        return ans;
    }
};