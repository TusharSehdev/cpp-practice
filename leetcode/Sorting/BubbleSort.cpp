#include <iostream>
#include <vector>
using namespace std;

vector<int> BubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSwap = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (isSwap == false)
        {
            return arr;
        }
    }
    return arr;
}

int main()
{
    vector<int> arr = {2, 4, 5, 2, 1, 6, 7, 8, 3, 9};
    int n = arr.size();
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}