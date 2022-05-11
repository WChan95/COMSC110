// Wilson Chan
// Programming Exercise 10.2 - My Savings Plan, v3.0;

#include <string>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{

    ifstream fin;
    fin.open("savings.txt");
    string line;

    // input values
    int years;
    for (int i = 0; i == 0; i++)
    {
        getline(fin, line);
        years = std::stoi(line);
    }

    double interest_rate;
    for (int i = 1; i == 1; i++)
    {
        getline(fin, line);
        interest_rate = std::stod(line);
    }

    int D;
    for (int i = 2; i == 2; i++)
    {
        getline(fin, line);
        D = std::stoi(line);
    }

    // output (calculated) values
    double p = interest_rate / 100 / 12; // 7.5% annual interest rate
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