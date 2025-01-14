#include <iostream>
#include <vector>
using namespace std;

// Brute Force

// int MaxStockProfit(vector<int> &arr)
// {
//     int MaxDiff = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[j] - arr[i] > MaxDiff)
//             {
//                 MaxDiff = arr[j] - arr[i];
//             }
//         }
//         return MaxDiff;
//     }
//     return 0;
// }

// Oprimized Way

int MaxStockProfit(vector<int> &arr)
{
    int MaxProfit = 0;
    int BestBuy = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - BestBuy > MaxProfit)
        {
            MaxProfit = arr[i] - BestBuy;
        }
        if (arr[i] < BestBuy)
        {
            BestBuy = arr[i];
        }
    }
    return MaxProfit;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    cout << MaxStockProfit(arr) << endl;
    return 0;
}