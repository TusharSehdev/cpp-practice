#include <iostream>
#include <vector>
using namespace std;

vector<int> DNFSort(vector<int> &arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 0, 0, 0, 2, 1, 1, 0, 0};
    int n = arr.size();
    DNFSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}