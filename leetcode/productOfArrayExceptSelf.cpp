#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute Force

// vector<int> prodOfArrayExceptSelf(vector<int> &arr, vector<int> &ans)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int prod = 1;
//         for (int j = 0; j < arr.size(); j++)
//         {
//             if (arr[j] != arr[i])
//             {
//                 prod = prod * arr[j];
//             }
//         }
//         ans.push_back(prod);
//     }
//     return ans;
// }

// Optimal Approch for Time Complexity O(n)

// vector<int> prodOfArrayExceptSelf(vector<int> &arr, vector<int> &ans)
// {

//     // prefix prod loop
//     vector<int> prefix(arr.size(), 1);
//     for (int i = 1; i < arr.size(); i++)
//     {
//         prefix[i] = prefix[i - 1] * arr[i - 1];
//     }
//     // suffix prod loop

//     vector<int> sufix(arr.size(), 1);
//     for (int i = arr.size() - 2; i >= 0; i--)
//     {
//         sufix[i] = sufix[i + 1] * arr[i + 1];
//     }

//     // ans loop
//     for (int i = 0; i < arr.size(); i++)
//     {
//         ans[i] = prefix[i] * sufix[i];
//     }
//     return ans;
// }

// Optimal Approch for Time Complexity O(n) and Space Complexity O(1)

vector<int> prodOfArrayExceptSelf(vector<int> &arr, vector<int> &ans)
{
    ans[0] = 1;
    // prefix prod loop
    for (int i = 1; i < arr.size(); i++)
    {
        ans[i] = ans[i - 1] * arr[i - 1];
    }
    // suffix prod loop
    int sufix = 1;
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        sufix = sufix * arr[i + 1];
        ans[i] = ans[i] * sufix;
    }

    // ans loop
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     ans[i] = prefix[i] * sufix[i];
    // }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> ans(arr.size());
    prodOfArrayExceptSelf(arr, ans);
    for (int val : ans)
    {
        cout << val << endl;
    }
    return 0;
}