// Wilson Chan
// Programming Exercise 6.4 -  Temperature Conversion v.2.0

#include <string>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{

    double temperatureCelsius;
    while (true)
    {
        cout << "What's the temperature in Celsius? ";
        cin >> temperatureCelsius;
        if(temperatureCelsius == -999){
            //should exit and not output anything else after
            break;
        }
        double temperatureFahrenheight = ((9 / 5) * temperatureCelsius) + 32;

        string degreeSymbol = "°";
        cout << temperatureCelsius << degreeSymbol << "C"
             << " equals " << temperatureFahrenheight << degreeSymbol << "F" << endl;;
    }
}

// EXPECT
/*  What's the temperature in Celsius? 100 
  100. Celsius equals 212.0 Fahrenheit    
 
  What's the temperature in Celsius? 0 
  0. Celsius equals 32.0 Fahrenheit    
   
  What's the temperature in Celsius? -40 
  -40. Celsius equals -40.0 Fahrenheit    
   
  What's the temperature in Celsius? 100.001 
  100.001 Celsius equals 212.0 Fahrenheit 
 
  What's the temperature in Celsius? -999     */