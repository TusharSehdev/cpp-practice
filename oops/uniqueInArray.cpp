#include <iostream>
using namespace std;

int uniqueInArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool uniqueValue = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[j] == arr[i])
            {
                uniqueValue = false;
                break;
            }
        }
        if (uniqueValue)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    uniqueInArray(arr, size);

    return 0;
}