// Wilson Chan
// Programming Exercise 5.2 - About Lighthouses, v2.0

#include <string>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double height;
    cout << "What's the lighthouse height in feet? ";
    cin >> height;

    double miles = sqrt(height * 0.8);
    cout.setf(ios::fixed);
    cout << setprecision(0);
    cout << "A " << height << " foot tall light can be seen from " << miles << " miles away";
}