// counting positive and negative numbers in an array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int A[] = { 3,5,-2,9,-4,10,-24,19,81,-7,12,13 };
    int pcount = 0;
    int ncount = 0;
    for (int x : A)
    {
        if (x > 0)
            pcount++;
        else
            ncount++;
    }
        cout << pcount << " " << ncount;
}
