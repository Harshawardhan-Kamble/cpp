// checking armstrong number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//armstrong number is
/*suppose number is 153
* it will be armstrong when cube of 1 + cube of 5 + cube of 3 =original no. i.e 153
*/

#include <iostream>
using namespace std;
int main()
{
    int sum = 0, r, n, m;
    cout << "Enter a number = ";
    cin>> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum += (r * r * r);
    }
    if (sum ==m)
        cout << m<< " is an armstrong number";
    else
        cout << m << " is not an armstrong number";
    return 0;

}

