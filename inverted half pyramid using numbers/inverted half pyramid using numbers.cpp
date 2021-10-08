// inverted half pyramid using numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// half pyramid using numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int count, n;
	count = 0;
	cout << "Enter n= ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i+j<=n-1)
				cout << ++count;
		}
		cout << endl;
		count = 0;
		
	}
}


