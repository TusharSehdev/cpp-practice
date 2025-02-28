#include <iostream>
#include <vector>
using namespace std;

int rotatedArrSearch(vector<int> &arr, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == tar) // target found
        {
            return mid;
        }

        if (arr[st] <= arr[mid]) // left side sorted
        {
            if (tar >= arr[st] && tar < arr[mid]) // left side check
            {
                return rotatedArrSearch(arr, tar, st, mid - 1);
            }
            else // right side check
            {
                return rotatedArrSearch(arr, tar, mid + 1, end);
            }
        }
        else
        { // right side sorted
            if (tar > arr[mid] && tar <= arr[end])
            { // right side check
                return rotatedArrSearch(arr, tar, mid + 1, end);
            }
            else
            { // left side check
                return rotatedArrSearch(arr, tar, st, mid - 1);
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {3, 5, 6, 1, 2};
    int st = 0;
    int end = arr.size() - 1;
    int tar = 2;
    cout << rotatedArrSearch(arr, tar, st, end) << endl;
    return 0;
}