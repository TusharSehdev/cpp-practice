#include <iostream>
using namespace std;

int fib(int n)
{
    if (n >= 1)
    {
        cout << 0 << " ";
    }
    if (n >= 2)
    {
        cout << 1 << " ";
    }
    int a = 0, b = 1, c;
    for (int i = 3; i <= n; i++)
    {

        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    fib(n);
    cout << endl;
    return 0;
}