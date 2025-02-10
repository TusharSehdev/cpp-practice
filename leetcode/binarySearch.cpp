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

int main()
{
    vector<int> arr = {4, 6, 8, 9, 10};
    int tar = 10;
    cout << BinarySearch(arr, tar) << endl;
    return 0;
}