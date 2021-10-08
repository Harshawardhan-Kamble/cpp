// Pattern 1 using array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; i >= j; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}