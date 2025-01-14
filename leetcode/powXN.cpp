#include <iostream>
using namespace std;

int PowXN(int x, int n)
{
    int ans = 1;

    // for negetive numbers making x = 1/x
    if (n < 0)
    {
        x = 1 / x;
        n = -n;
    }
    while (n > 0)
    {
        if (n % 2 == 1) // finding last value of x in binary
        {
            ans = ans * x; // ans will store x for only 1 in binary
        }
        x = x * x; // making x = x^2
        n = n / 2; // dividing n for next binary value
    }
    return ans;
}

int main()
{
    int n = 5;
    int x = 3;
    cout << PowXN(x, n) << endl;
    return 0;
}