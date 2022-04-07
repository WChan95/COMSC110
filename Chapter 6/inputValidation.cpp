// Wilson Chan
// Programming Exercise 6.2 - Input validation

#include <iostream>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

void displayMortgage(int years, int D, double interest_rate)
{
/*     // input values
    int years = 20;
    int D = 150;
    double interest_rate = 0.095; */

    // output (calculated) values
    double p = interest_rate/100/ 12; // 7.5% annual interest rate
    double T = years * 12;
    double S = D * ((pow(1 + p, T) - 1) / p);

    // echoing input values, unformatted
    cout << "In " << years << " years";
    cout << " at " << interest_rate  << "%, $";
    cout << D << " deposited per month will grow to $";

    // formatting output (see 4.2)
    cout.setf(ios::fixed | ios::showpoint);
    cout << setprecision(2);
    cout << S << "." << endl;
    // Expected output:
    // In 20 years at 9.5%, $150 deposited per month will grow to $106788.53
}

int main()
{
    string password;
    while (password != "notpassword1")
    {
        cout << "Enter your password: ";
        cin >> password;
    }

    displayMortgage(20,150,9.5);
}