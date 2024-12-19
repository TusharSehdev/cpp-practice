#include <iostream>
#include <vector>
using namespace std;

//Kandane's Algorithm


int MaxSubArrSum(vector<int> &nums)
{
    int CurrSum = 0;
    int MaxSum = -__INT_MAX__;
    for (int i = 0; i < nums.size(); i++)
    {
        CurrSum += nums[i];
        MaxSum = max(CurrSum, MaxSum);
        if (CurrSum < 0)
        {
            CurrSum = 0;
        }
    }
    return MaxSum;
}

int main()
{
    vector<int> nums = {1, 2, -3, 5, 7, -4};
    cout << MaxSubArrSum(nums) << endl;
    return 0;
}