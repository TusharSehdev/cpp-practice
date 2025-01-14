#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

// brute force approch
int bruteForce(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            if (count > arr.size() / 2)
            {
                return arr[i];
            }
        }
    }
    return -1;
}

// optimal approch

int optimalApp(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int count = 1;
    int ans = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
            ans = arr[i];
        }
        if (count > arr.size() / 2)
        {
            return ans;
        }
    }
    return -1;
}

// moore's voting approch
int mooresVoting(vector<int> &arr)
{
    int count = 0;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (count == 0)
        {
            ans = arr[i];
        }
        if (ans == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    // for no majority element 

    for (int val : arr)
    {
        if (val == ans)
        {
            count++;
        }
    }
    if (count > arr.size() / 2)
    {
        return ans;
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    // cout << bruteForce(arr);
    // cout << optimalApp(arr);
    cout << mooresVoting(arr);
    cout << endl;
    return 0;
}