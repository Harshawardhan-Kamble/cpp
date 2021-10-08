// max element in an array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int max = 1;
	int A[10] = { 1,6,2,5,4,8,7,2,6,1 };
	for (int x : A)
	{
		if (x >= max)
			max = x;
	}
	cout << "Maximum number is " << max;
}