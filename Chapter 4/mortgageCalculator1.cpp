#include <string>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    // Mortgage Payment: (P * (1 + r)^n * r)/ ((1 + r)^n - 1)
    // p is the mortgage amount entered by the user
    // r is the monthly decimal interest rate
    // n is the number of monthly paymentsi n the payback period

    int amount_borrowed = 270000; // in USD
    double interest_rate = 5.125; // As a percentage, ex: 5.125 = 5.125% = .005125
    int payback_period = 30;      // in years

    // Calculated variables
    int p = amount_borrowed;
    double r = (interest_rate / 100) / 12;
    int n = payback_period * 12;                                                // number of months in the payback period
    double monthly_payment = (p * pow((1 + r), n) * r) / (pow((1 + r), n) - 1); // Calculates monthly mortgage payment

    cout << "Amount borrowed (programmer input) = "
         << "$" << amount_borrowed << endl;
    cout << "Annual inerest rate (programmer input) = " << interest_rate << "%" << endl;
    cout << "Payback period (programmer input) = " << payback_period << " Years" << endl;
    cout << "Monthly payment (calcualted output) = "
         << "$" << monthly_payment << endl;
}

// Amount borrowed (programmer input) = $270000
//  Annual interest rate (programmer input)  = 5.125%
// Payback period (programmer input)  = 30 Years
// Monthly payment (calculated output)  = $1470.11