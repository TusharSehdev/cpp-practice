#include <iostream>
#include <vector>
using namespace std;

void Merge2Array(vector<int> arr1, vector<int> arr2, int n, int m)
{
    for (int i = n + m - 1; i >= 0; i--)
    {
        for (int j = m)
    }
}

int main()
{
    vector<int> arr1 = {2, 3, 4, 0, 0, 0, 0};
    int n = 3;
    vector<int> arr2 = {3, 5, 9, 10};
    int m = 4;
    Merge2Array(arr1, arr2, n, m);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}