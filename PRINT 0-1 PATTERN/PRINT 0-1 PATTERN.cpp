// PRINT 0-1 PATTERN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//




#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter n= ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i >= j)
			{
				if ((i+j)%2==0)
					cout << "1";
				else
					cout << "0";
			}
		}
		cout << endl;

	}
}



