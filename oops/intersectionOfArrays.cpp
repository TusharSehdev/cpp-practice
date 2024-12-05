#include <iostream>
using namespace std;

int checkIntersection(int array1[], int array2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        bool inter = false;
        for (int j = 0; j < size2; j++)
        {
            if (array1[i] == array2[j])
            {
                inter = true;
                break;
            }
        }
        if (inter)
        {
            cout << array1[i] << " ";
        }
    }
    cout << endl;
    return 0;
}

int main()
{
    int size1 = 5;
    int size2 = 2;
    int array1[] = {1, 3, 5, 7, 9};
    int array2[] = {5, 7};
    checkIntersection(array1, array2, size1, size2);
    return 0;
}