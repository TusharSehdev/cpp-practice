#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &arr, int tar)
{
    int st = 0;
    int end = arr.size() - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int BinarySearchOpt(vector<int> &arr, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid])
        {
            return BinarySearchOpt(arr, tar, mid + 1, end);
        }
        else if (tar < arr[mid])
        {
            return BinarySearchOpt(arr, tar, st, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int st = 0;
    vector<int> arr = {4, 6, 8, 9, 10, 12};
    int end = arr.size() - 1;
    int tar = 12;
    cout << BinarySearchOpt(arr, tar, st, end) << endl;
    return 0;
}