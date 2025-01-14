#include <iostream>
#include <vector>
using namespace std;

int containerMaxWater(vector<int> &h, vector<int> &ans)
{
    int area = 0;
    int maxArea = 0;
    int width = 0;
    int height = 0;
    for (int i = 0; i < h.size(); i++)
    {
        for (int j = i + 1; j < h.size(); j++)
        {
            width = j - i;
            height = min(h[i], h[j]);
            area = width * height;
            maxArea = max(area, maxArea);
        }
    }

    return maxArea;
}


int main()
{
    vector<int> h = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> ans;
    cout << containerMaxWater(h, ans) << endl;
    return 0;
}