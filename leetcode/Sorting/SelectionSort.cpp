#include <iostream>
#include <vector>
using namespace std;

vector<int> SelectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int StartingIndex = i; // starting index of unsorted part of array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[StartingIndex])
            {
                StartingIndex = j;
            }
        }
        swap(arr[i], arr[StartingIndex]);
    }
    return arr;
}

int main()
{
    vector<int> arr = {2, 4, 5, 2, 1, 6, 7, 8, 3, 9};
    int n = arr.size();
    SelectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}