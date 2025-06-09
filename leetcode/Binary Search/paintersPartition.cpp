#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int size, int MaxPainterTime, int m)
{
    int painter = 1;
    int time = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > MaxPainterTime)
        {
            return false;
        }
        if (time + arr[i] <= MaxPainterTime)
        {
            time = time + arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    if (painter > m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int PaintersPartition(vector<int> &arr, int size, int m)
{
    int maxVal = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int st = maxVal;
    int end = sum;

    if (m > size)
    {
        return -1;
    }
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, size, mid, m)) // valid
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
    vector<int> arr = {40, 30, 10, 20};
    int m = 2;
    int size = 4;
    cout << PaintersPartition(arr, size, m) << endl;
    return 0;
}