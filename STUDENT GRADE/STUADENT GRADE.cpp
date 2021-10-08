// STUADENT GRADE.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
CALCULATE AVERAGE IN THREE SUBJECTS AND IF
AVG>=60 THEN 'A' GRADE
35=<AVG<60 THEN 'B' GRADE
AVG<35 THEN 'C' GRADE
*/

#include <iostream>
using namespace std;
int main()
{
	int Subject1, Subject2, Subject3;
	float AVERAGE;
	cout << " Marks in Subject 1 = ";
	cin >> Subject1;
	cout << " Marks in Subject 2 = ";
	cin >> Subject2;
	cout << " Marks in Subject 3 = ";
	cin >> Subject3;
	AVERAGE = float(Subject1 + Subject2 + Subject3) / 3;
	cout << "AVERAGE is " << AVERAGE << endl;
	if (AVERAGE >= 60)
		cout << "GRADE A ";
	else if (AVERAGE >= 35 && AVERAGE < 60)
		cout << "GRADE B ";
	else
		cout << "GRADE C ";
	return 0;
}

