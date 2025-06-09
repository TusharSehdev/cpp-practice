#include <iostream>
#include <vector>
using namespace std;

void DNFSort(vector<int> &arr, int n)
{
    int noOfOnes = 0;
    int noOfTwos = 0;
    int noOfZeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            noOfZeros++;
        }
        else if (arr[i] == 1)
        {
            noOfOnes++;
        }
        else
        {
            noOfTwos++;
        }
    }
    int index = 0; // index of the pointer
    for (int i = 0; i < noOfZeros; i++)
    {
        arr[index] = 0;
        index++;
    }
    for (int i = 0; i < noOfOnes; i++)
    {
        arr[index] = 1;
        index++;
    }
    for (int i = 0; i < noOfTwos; i++)
    {
        arr[index] = 2;
        index++;
    }
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