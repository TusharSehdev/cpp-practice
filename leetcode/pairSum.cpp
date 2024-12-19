#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> &nums, int target, vector<int> &ans)
{
    int i = 0;
    int j = nums.size() - 1;
    int pairSum = 0;
    while (i < j)
    {
        pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            break;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 5, 7, 9, 11};
    int target = 14;
    vector<int> ans;
    pairSum(nums, target, ans);
    cout << ans[0] << " " << ans[1];
    cout << endl;
    return 0;
}