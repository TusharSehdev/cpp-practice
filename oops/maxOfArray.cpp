#include <iostream>
using namespace std;
int maxOfArray(int arr[], int size)
{
    int MaxValueCheck = -__INT_MAX__;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > MaxValueCheck)
        {
            MaxValueCheck = arr[i];
            index = i;
        }
    }
    cout << "Max Value in array is: " <<  MaxValueCheck << endl;
    cout <<"Index is : "<<  index << endl;
    return 0;
}

int main()
{
    int arr[] = {-23, 232, 313, 355, 2144};
    int size = sizeof(arr) / sizeof(int);
    maxOfArray(arr, size);
    return 0;
}