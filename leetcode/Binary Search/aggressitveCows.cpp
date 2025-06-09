#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int isValid(vector<int> &arr, int c, int n, int MinDistanceAllowed)
{
    int cows = 1;
    int LastSlot = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - LastSlot >= MinDistanceAllowed)
        {
            cows++;
            LastSlot = arr[i];
        }
        if (cows == c)
        {
            return true;
        }
    }
    return false;
}

int AggressiveCows(vector<int> &arr, int c, int n)
{
    sort(arr.begin(), arr.end());
    int st = 1;
    int ans = -1;
    int end = arr[n - 1] - arr[0];

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, c, n, mid)) // right
        {
            ans = mid;
            st = mid + 1;
        }
        else // left
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int c = 3;
    int n = arr.size();
    cout << AggressiveCows(arr, c, n);
    return 0;
}