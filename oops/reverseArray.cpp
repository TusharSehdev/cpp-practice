#include <iostream>
using namespace std;

int reverseArray(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}

int main()
{
    int size = 7;
    int arr[] = {1, 3, 4, 5, 6, 8, 9};
    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}