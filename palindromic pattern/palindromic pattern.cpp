// palindromic pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "n= ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ( (i + j)>=( n + 1))
                cout << i;
            else
                cout << " ";


        }
        cout << endl;
    }
}
