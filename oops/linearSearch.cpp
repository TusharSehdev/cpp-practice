#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "the target is at : " << i << "index" << endl;
            return 1;
        }
    }
    cout << "no target found in array" << endl;
    return -1;
}

int main()
{
    int size = 6;
    int target = 402;
    int arr[] = {23, 42, 543, 65, 322, 545};
    linearSearch(arr, size, target);
    return 0;
}