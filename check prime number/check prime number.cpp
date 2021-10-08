// check prime number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n, i = 1, count = 0;
	cout << "Enter n = ";
	cin >> n;
	while (i <= n)
	{
		if (n % i == 0)
		count++;
			i++;
	}
	if (count == 2)
		cout << n << " is a prime number";
	else
		cout << n << " is not a prime number";
	return 0;
}

