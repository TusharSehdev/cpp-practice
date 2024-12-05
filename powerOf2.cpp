#include <iostream>
using namespace std;
int base = 1;

int PowerOf2Bitwise(int n)
{
    if (n > 0 && ((n & (n - 1)) == 0))
    {
        cout << n << " is a power of 2" << endl;
        return 1;
    }
    else
    {
        cout << n << " is not a power of 2" << endl;
        return 0;
    }
}
int PowerOf2(int n)
{
    while (base <= n)
    {
        if (base == n)
        {
            cout << base << " is a power of 2" << endl;
            return 1;
        }
        base = base * 2;
    }
    cout << n << " is not a power of 2" << endl;
    return 0;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    PowerOf2(n);
    PowerOf2Bitwise(n);
    return 0;
}