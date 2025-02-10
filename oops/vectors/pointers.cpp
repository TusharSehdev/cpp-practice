#include <iostream>
using namespace std;

// void changeA(int &b)
// { // pass by reference using aliase
//     int b = 10;
// }
void changeA(int *a) // pass by reference using pointers
{
    *a = 10;
}

int main()
{

    // pointers (&)
    int a = 4;
    int *b = &a;
    int **c = &b;
    cout << b << endl;
    cout << c << endl;
    cout << &b << endl;

    // dereference (*) | opening a pointer or value to the address

    cout << *b << endl;

    // Null Pointer

    int *n = NULL;
    int *n2 = NULL;

    cout << n << endl;
    cout << n2 << endl;

    changeA(&a);
    cout << a << endl;

    // array pointers

    // pointers are usually a variable and values can be altered
    // int x = 30;
    // int y = 40;
    // int *ptrX = &x;
    // int *ptrY = &x;
    // cout << ptrX << endl;
    // cout << ptrY << endl;
    // cout << &y << endl;

    // but array pointers are constant pointers that can not be change
    int arr[] = {1, 2, 3, 4, 5};
    int *ptrARR = arr; // array is a pointer on itself, it doesnot need a &
    cout << ptrARR << endl;
    cout << arr << endl;
    cout << *ptrARR << endl;

    // *(arr+1)
    cout << *arr << endl;       // index 0
    cout << *(arr + 1) << endl; // index 1
    cout << *(arr + 2) << endl; // index 2
    cout << *(arr + 3) << endl; // index 3
    cout << *(arr + 4) << endl; // index 4

    // pointer arithemetic

    int m = 10;
    int *ptrM = &m;
    cout << ptrM << endl;

    // ++ on pointers

    // (*ptrM)++; // without bracket it will throw garbage value . as ++ has higher presedence that *
    // cout << *ptrM << endl;

    //+ - numbers on pointers

    ptrM = ptrM + 2;
    cout << ptrM << endl;

    // Subtract on Pointer with pointer (cannot ADD pointer with pointer)
    int *ptrARR1 = (arr + 1);
    int *ptrARR2 = (arr + 3);
    cout << ptrARR2 - ptrARR1 << endl; // 2 int difference between 2 pointer (memory location)

    // Compare Pointer with Pointer (<, >, <=, >=, ==, !=)
    if (ptrARR1 > ptrARR2)
    {
        cout << "is bigger" << endl;
    }
    else
    {
        cout << "is small" << endl;
    }

    return 0;
}