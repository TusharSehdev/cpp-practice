#include <iostream>
using namespace std;

int main()
{
    // pattern 1

    // int n = 3;
    // int num = 'A';
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "  " << (char)num;
    //         num++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // pattern 2 (Alphabetic Pyramid)

    // int n = 5;
    // char al = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         /* code */
    //         cout << al << " ";
    //     }
    //     al++;
    //     cout << endl;
    // }
    // return 0;

    // Pattern 3 (inverted number Pyramid)

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         /* code */
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // Pattern 4 (floyd Triangle Pattern)

    // int n = 5;
    // int x = 1;
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         /* code */
    //         cout << x << " ";
    //         x++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // int n = 5;
    // int x = 1;
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = i + 1; j > 0; j--) // backwards logic
    //     {
    //         cout << x << " ";
    //         x++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // Pattern 5(assending and decending pyramid)

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 1; j <= i + 1; j++) // backwards logic
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // for (int l = n; l >= 0; l--)
    // {
    //     for (int k = 1; k <= l; k++)
    //     {
    //         cout << k << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // Pattern 6
    // int n = 7;
    // char al = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << al << " ";
    //         al++;
    //     }
    //     cout << endl;
    // }

    // Pattern 7

    // int n = 5;
    // for (char i = 'A'; i < 'A' + n; i++)
    // {
    //     for (char j = i; j >= 'A'; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    //    Pattern 8

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < n - i; k++)
    //     {
    //         cout << (i + 1);
    //     }
    //     cout << endl;
    // }

    // Pattern 9

    // int n = 4;
    // char al = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < n - i; k++)
    //     {
    //         cout << al;
    //     }
    //     al++;
    //     cout << endl;
    // }

    // Pattern 10(Number top Pyramid)

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << j+1;
    //     }
    //     for (int j = i+1; j >= 1; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // Pattern 11 (Hollow star diamond)

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != 0)
    //     {
    //         for (int j = 0; j < 2 * i - 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != n - 2)
    //     {
    //         for (int j = 0; j < 2 * (n - i - 2) - 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Pattern 12 (Butterfly Pattern)

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 2 * i; j < 2 * (n - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}