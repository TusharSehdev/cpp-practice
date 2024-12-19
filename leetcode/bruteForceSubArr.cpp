#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    int stInd = 0;
    int endInd = 0;
    int maxSum = -__INT_MAX__;
    for (int st = 0; st < arr.size(); st++)
    {
        bool isMax = false;
        int CurrSum = 0;
        for (int end = st; end < arr.size(); end++)
        {
            CurrSum += arr[end];
            if (CurrSum > maxSum)
            {
                maxSum = CurrSum;
                stInd = st;
                endInd = end;
            }
        }
    }
    cout << maxSum;
    cout << endl;
    for (int i = stInd; i <= endInd; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}