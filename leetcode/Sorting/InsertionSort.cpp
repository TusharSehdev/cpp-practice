#include <iostream>
#include <vector>
using namespace std;

vector<int> InsertionSort(vector<int> &arr, int n) // O(n^2)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1; // starting index of unsorted part of array
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
    return arr;
}

int main()
{
    vector<int> arr = {2, 4, 5, 2, 1, 6, 7, 8, 3, 9};
    int n = arr.size();
    InsertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}