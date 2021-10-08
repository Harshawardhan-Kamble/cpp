// nature of roots.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, d;
    cout << "Enter " <<"a = ";
    cin >> a;
    cout << "Enter " <<"b = ";
    cin >> b;
    cout << "Enter " <<"c = ";
    cin >> c;
    d = (b * b) - (4 * a * c);
        if (d == 0)
            cout<<"Roots are " << -b / (2 * a) << endl << "Roots are real and equal ";
        else if (d>0)
            cout<<"Roots are "<<(-b+sqrt(d))/(2*a) <<" And " << (-b - sqrt(d)) / (2 * a) <<endl << "Roots are real and different ";
        else
            cout << "Roots are imaginary ";
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
