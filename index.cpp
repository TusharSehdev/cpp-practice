#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i * i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            // cout << n << " is a not a prime number " << endl;
            break;
        }
        // else
        // {
        //     cout << n << " is a prime number " << endl;
        // }
    }

    if (isPrime)
    {
        cout << n << " is a prime number " << endl;
    }
    else
    {
        cout << n << " is a not a prime number " << endl;
    }

    return 0;
}
