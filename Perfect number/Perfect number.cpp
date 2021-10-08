// Perfect number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Perfect number = sumof factors of the number is double the number

#include <iostream>
using namespace std;
int main()
{
	int n, i = 1, sum = 0;
	cout << "Enter n = ";
	cin >> n;
	while (i <= n)
	{
		if (n % i == 0)
		{
			sum += i;
		}
		i++;
	}
	if (sum == 2 * n)
		cout << n << " is a Perfect number";
	else
		cout << n << " is not a Perfect number";
}