#include <iostream>
using namespace std;

int Factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    if (r > n)
    {
        cerr << "Invalid input: r cannot be greater than n." << endl;
        return 0;
    }
    else
    {
        int ans = Factorial(n) / (Factorial(r) * Factorial(n - r));
        return ans;
    }
}
int main()
{
    int one = 10;
    int two = 2;
    cout << "nCr of " << one << "," << two << " is " << nCr(one, two) << endl;
    return 0;
}