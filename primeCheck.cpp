#include <iostream>
using namespace std;

int isPrime(int n)
{
    if (n == 2 || n == 3)
    {
        // cout << "is a Prime Number";
        return 1;
    }
    else if (n <= 1)
    {
        // cout << "is not a Prime Number";
        return 0;
    }
    else if (n > 2 && n % 2 == 0)
    {
        // cout << "is not a Prime Number";
        return 0;
    }
    else if (n > 3)
    {
        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                // cout << "is not a Prime Number";
                return 0;
            }
        }
    }
    // cout << "is a Prime Number";
    return 1;
}
int printPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter a number to check if it is a Prime Number: ";
    cin >> n;
    cout << n << " ";
    // isPrime(n);
    if (isPrime(n))
    {
        cout << "is a Prime Number";
    }
    else
    {
        cout << "is not a Prime Number";
    }
    cout << endl;
    cout << "Prime numbers from 1 to " << n << " are: ";
    printPrime(n);
    cout << endl;
    return 0;
}