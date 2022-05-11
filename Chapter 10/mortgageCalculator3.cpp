// Wilson Chan
// Programming Exercise 10.5 - A Simple Mortgage Calculator, v3.0

#include <string>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int amountBorrowed;
    double interestRate;
    int payback_period = 30;

    string fileName = "mortgage.txt";
    ifstream fin;
    fin.open(fileName);

    for(int i = 0; i==0; i++){
        string line;
        getline(fin,line);
        amountBorrowed = std::stoi(line);
    }

    for(int i = 1; i==1; i++){
        string line;
        getline(fin, line);
        interestRate = std::stod(line);
    }

    int p = amountBorrowed;
    double r = (interestRate / 100) / 12;
    int n = payback_period * 12;

    double monthly_payment = (p * pow((1 + r), n) * r) / (pow((1 + r), n) - 1); // Calculates monthly mortgage payment
    cout << "Amount borrowed (user input) = $" << amountBorrowed << endl;
    cout << "Annual interest rate (user input) " << interestRate << "%" << endl;
    cout << "Payback period (programer input) = " << payback_period << " Years" << endl;
    cout << "Monthly payment (output) = $" << monthly_payment << endl;
}

/* EXPECT FOLLOWING OUTPUT

  What's the amount borrowed? 270000
  What's the annual interest rate? 5.125
  Amount borrowed (user input) = $270000
  Annual interest rate (user input)  = 5.125%
  Payback period (programmer input)  = 30 Years
  Monthly payment (output)  = $1470.11

 */
