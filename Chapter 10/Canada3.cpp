// Wilson Chan
// Programming Exercise 10.3 -  Temperature Conversion v.3.0

#include <string>
#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    double temperatureCelsius;
    ifstream fin;
    string fileName = "temps.txt";
    fin.open(fileName);
    while (true)
    {
        string line;
        getline(fin, line);
        temperatureCelsius = std::stod(line);
        if(temperatureCelsius == -999){
            //should exit and not output anything else after
            break;
        }
        double temperatureFahrenheight = ( 1.8 * temperatureCelsius) + 32;

        string degreeSymbol = "°";
        cout << temperatureCelsius << degreeSymbol << "C"
             << " equals " << temperatureFahrenheight << degreeSymbol << "F" << endl;;
    }
    fin.close();
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