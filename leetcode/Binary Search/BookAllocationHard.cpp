#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int maxAllowedPages, int m)
{
    int stu = 1;
    int pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }

        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            stu++;
            pages = arr[i];
        }
    }
    if (stu > m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int BookAllocation(vector<int> &arr, int m, int n)
{
    int st = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;

    if (m > n)
    {
        return -1;
    }

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, mid, m)) // valid
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {15, 17, 20};
    int m = 2;
    int n = 3;
    cout << BookAllocation(arr, m, n) << endl;
    return 0;
}