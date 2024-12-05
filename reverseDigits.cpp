#include <iostream>
using namespace std;

// int countDigits(int n)
// {
//     int count = 0;
//     for (int i = 0; n > 0; i++)
//     {
//         n = n / 10;
//         count++;
//     }
//     cout << count << endl;
//     return;
// }
int reverseDigits(int n)
{
    int rev = 0;
    for (int i = 0; n > 0; i++)
    {
        int rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    cout << rev << endl;
    return 0;
}
int main()
{
    int n ;
    cout << "Enter a number: ";
    cin >> n;
    reverseDigits(n);
    // countDigits(1234);
    return 0;
}