#include <iostream>
#include <vector>
using namespace std;

int SingleElement(vector<int> &arr)
{
    int size = arr.size();
    int st = 0;
    int end = size - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mid == 0 && mid == size - 1)
        {
            return arr[mid];
        }
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
        {
            return arr[mid];
        }
        if (mid % 2 == 0) // even no of elements in left and right of middle
        {
            if (arr[mid - 1] == arr[mid]) // conditon for single element in right
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else // odd no of elements in left and right of middle
        {
            if (arr[mid - 1] == arr[mid]) // condition for sigle element in left
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7};
    cout << SingleElement(arr) << endl;
    return 0;
}