// whichdayofweek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int day;
	cout << "Enter day no. ";
	cin >> day;
	if (day == 1)
		cout << "Sunday";
	else if (day == 2)
		cout << "Monday";
	else if (day == 3)
		cout << "Tuesday";
	else if (day == 4)
		cout << "Wednesday";
	else if (day == 5)
		cout << "Thursday";
	else if (day == 6)
		cout << "Friday";
	else if (day == 7)
		cout << "Saturday";
	else
		cout << "Invalid number." <<endl<<"Please Enter a number between 1 to 7";
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
