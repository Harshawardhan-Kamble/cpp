// SUMOFNATURAL NUMBERS USING LOOPS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int i=1, n, sum=0;
    cout << "Enter n = ";
    cin >> n;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << sum;
    return 0;
}

