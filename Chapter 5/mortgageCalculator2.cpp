// Wilson Chan
// Programming Exercise 5.1 - A Simple Mortgage Calculator, v2.0

#include <string>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{

    int amountBorrowed;
    double interestRate;
    int payback_period = 30;

    cout << "What's the amount borrowed? ";

    cin >> amountBorrowed;

    cout << "What's the annual interest rate? ";

    cin >> interestRate;

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
