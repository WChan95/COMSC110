// Wilson Chan
//Programming Exercise 5.4 -  Temperature Conversion v.1.0

#include <string>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{

    double temperatureCelsius;
    cout << "What's the temperature in Celsius? ";
    cin >> temperatureCelsius;
    double temperatureFahrenheight = ((9 / 5) * temperatureCelsius) + 32;

    string degreeSymbol = "°";
    cout << temperatureCelsius << degreeSymbol << "C"
         << " equals " << temperatureFahrenheight << degreeSymbol << "F";
}

// EXPECT
/* What's the temperature in Celsius? 100.001
  100.001 Celsius equals 212.0 Fahrenheit */