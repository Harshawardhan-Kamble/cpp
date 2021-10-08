// FACTORIAL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, fact = 1;
    cout << "Enter n = ";
    cin >> n;
    while (i <= n)
    {
        fact *= i;
        i++;
      
    }
    cout << "Factorial of " << n << " is " << fact;
    return 0;
}
