// factors of a number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n, i = 1;
	cout << "Enter n = ";
	cin >> n;
	while (i <= n)
	{
		if (n % i == 0)
			cout  << i << " , ";
		i++;
	}
}

