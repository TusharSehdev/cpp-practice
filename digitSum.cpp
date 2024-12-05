#include<iostream>
using namespace std;


int digitSum(int n)
{
    int digitSum = 0;
    while(n > 0){
        int lastNumb = n % 10;
        n = n / 10;
        digitSum = digitSum + lastNumb;
    }
    return digitSum;
}

int main()
{
    cout << digitSum(123) << endl;
    return 0;
}