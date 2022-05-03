// Wilson Chan
// Programming Exercise 8.1 - Parameter Lists

#include <iostream>
#include <cmath>
using namespace std;

double calcAverage(int a, int b, int c)
{
    double result = 0.0;
    result = (a + b + c) / 3.0;

    //rounds to the nearest hundreth;
    return floor(result * 100 + 0.5) / 100;
} // calcAverage

int main()
{
    int x;
    cout << "Enter the first whole number: ";
    cin >> x;

    int y;
    cout << "Enter the second whole number: ";
    cin >> y;
    int w;
    cout << "Enter the third whole number: ";
    cin >> w;
    double z = calcAverage(x, y, w);
    cout << z << endl;
} // main