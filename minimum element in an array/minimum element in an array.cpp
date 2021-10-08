// minimum element in an array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int A[] = { 8,4,12,37,36,25,-2,10,15,25 };
    int min = A[0];
    for (int x : A)
    {
        if (x < min)
            min = x;

    }
    cout << "Minimum number is " << min;
}

