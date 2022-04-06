// Wilson Chan
// Programming Exercise 5.5 - My Savings Plan, v2.0;

#include <string>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // input values
    int years;
    cout << "Number of years until retirement: ";
    cin >> years;
    int D;
    cout << "Amount deposited per month ";
    cin >> D;
    double interest_rate;
    cout << "Expected annual interest rate: ";
    cin >> interest_rate;

    // output (calculated) values
    double p = interest_rate/100 / 12; // 7.5% annual interest rate
    double T = years * 12;
    double S = D * ((pow(1 + p, T) - 1) / p);

    // echoing input values, unformatted
    cout << "In " << years << " years";
    cout << " at " << interest_rate << "%, $";
    cout << D << " deposited per month will grow to $";

    // formatting output (see 4.2)
    cout.setf(ios::fixed | ios::showpoint);
    cout << setprecision(2);
    cout << S << "." << endl;
    // Expected output:
    // In 20 years at 9.5%, $150 deposited per month will grow to $106788.53
}