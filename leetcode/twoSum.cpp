//
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> sol;
        for (int i = 0; i < nums.size(); i++)
        {
            bool isSum = false;
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j && nums[i] + nums[j] == target)
                {
                    isSum = true;
                    break;
                }
            }
            if (isSum)
            {
                sol.push_back(i);
            }
        }
        return sol;
    }
};