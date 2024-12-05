// #include <iostream>
// using namespace std;

// int maxOfArray(int arr[], int size)
// {
//     int MaxValueCheck = -__INT_MAX__;
//     int index = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > MaxValueCheck)
//         {
//             MaxValueCheck = arr[i];
//             index = i;
//         }
//     }
//     return index;
// }
// int minOfArray(int arr[], int size)
// {
//     int minValueCheck = __INT_MAX__;
//     int index = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < minValueCheck)
//         {
//             minValueCheck = arr[i];
//             index = i;
//         }
//     }
//     return index;
// }

// int main()
// {
//     int arr[] = {43, 65, 76, 89, 424};
//     int size = 5;
//     swap(arr[minOfArray(arr, size)], arr[maxOfArray(arr, size)]);
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int swapMinMax(int arr[], int size)
{
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }
    swap(arr[minIndex], arr[maxIndex]);
    return 0;
}

int main()
{
    int arr[] = {67, 21, 54, 65, 88, 44};
    int size = sizeof(arr) / sizeof(int);
    swapMinMax(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}