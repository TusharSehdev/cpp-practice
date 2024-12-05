#include <iostream>
using namespace std;

int minOfArray(int arr[], int size)
{
    int minValueCheck = __INT_MAX__;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minValueCheck)
        {
            minValueCheck = arr[i];
        }
    }
    cout << "Minimum value: " << minValueCheck << endl;
    return 0;
}

int main()
{
    int arr[] = {1, 31, 43, 41, 84, 100, -21};
    int size = sizeof(arr) / sizeof(arr[0]);
    minOfArray(arr, size);
    return 0;
}