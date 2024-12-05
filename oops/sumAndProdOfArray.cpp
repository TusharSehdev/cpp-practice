#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum is : " << sum;
    cout << endl;
    return 0;
}
int prodOfArray(int arr[], int size)
{
    int prod = 1;
    for (int i = 0; i < size; i++)
    {
        prod = prod * arr[i];
    }
    cout << "Product is : " << prod;
    cout << endl;
    return 0;
}

int main()
{
    int size = 5;
    int arr[] = {21, 34, 54, 55, 87};
    sumOfArray(arr, size);
    prodOfArray(arr, size);
    return 0;
}