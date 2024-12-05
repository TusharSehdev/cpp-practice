#include <iostream>
using namespace std;

int DeciToBinary(int n)
{
    int pow = 1;
    int ans = 0;
    while (n > 0)
    {
        int rem = n % 2;
        n = n / 2;
        ans = ans + rem * pow;
        pow = pow * 10;
    }
    return ans;
}
int BinaryToDeci(int n)
{
    int pow = 1;
    int ans = 0;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        if (rem != 1 && rem != 0)
        {
            cout << "Invalid Input" << endl;
            return -1;
        }
        ans = ans + rem * pow;
        pow = pow * 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a binary to convert to decimal: ";
    cin >> n;
    cout << BinaryToDeci(n) << endl;
    return 0;
}