// display digits of a number in reverse.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
int main()
{
	int n, r;
	cout << "Enter the number to reverse n = ";
	cin >> n;
	while (n > 0)
	{
		r = n % 10;
		n = n / 10;
		cout << r << endl;
	}
}
