// reverse the number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n, r, reverse = 0;
   cout << "Enter number to reverse :- ";
   cin >> n;
   while (n > 0)
   {
	   r = n % 10;
	   n = n / 10;
	   reverse = reverse * 10 + r;
   }
   cout << reverse;

}


