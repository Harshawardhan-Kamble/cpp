// pattern 1to16 in  a matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int count = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << ++count << " ";
        }
        cout << endl;
    }
 
}
