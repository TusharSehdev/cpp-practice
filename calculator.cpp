#include<iostream>
using namespace std;

int Cal(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        return a / b;
        break;
    default:
        return 0;
        break;
    }
}
int main()
{
    int a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter Second number: ";
    cin >> b;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Result: " << Cal(a, b, op) << endl;
    return 0;
}