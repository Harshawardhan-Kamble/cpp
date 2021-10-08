// sum of elements in an array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int A[] = { 1,9,5,3,6,7 };
    for (int y : A)
    {
        sum += y;
    }
    cout << sum;
}
