
// Wilson Chan
// Programming Exercise 4.2

#include <string>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    // Write a program to determine how far away a boat can see a lighthouse at sea.
    int height = 100;                  // height of lighthouse (feet);
    double miles = sqrt(height * 0.8); // calculated miles using the formula: distance in miles = square root of: 0.8 times the height in feet;

    cout.setf(ios::fixed);
    cout << setprecision(0);
    cout << "A " << height << " foot tall light house can be seen from " << miles << " miles away" << endl;
    // Expected Output:
    // A 100 foot tall lighthouse can be seen from 9 miles away
}