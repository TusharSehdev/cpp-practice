#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}