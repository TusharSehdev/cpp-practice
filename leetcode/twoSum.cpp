#include <iostream>
#include <vector>
using namespace std;

int twoSum(vector<int> &nums, int target, vector<int> &solution)
{
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
            solution.push_back(i);
        }
    }
    for (int val : solution)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

int main()
{
    int input;
    vector<int> nums;
    int target;
    cout << "Enter numbers for the array (enter -1 to stop): ";
    while (true)
    {
        int input;
        cin >> input;
        if (input == -1)
            break;
        nums.push_back(input);
    }
    cout << "Enter Sum target: ";
    cin >> target;
    vector<int> solution;
    nums.push_back(input);
    twoSum(nums, target, solution);

    return 0;
}