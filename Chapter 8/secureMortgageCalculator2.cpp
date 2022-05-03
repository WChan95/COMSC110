// Wilson Chan
// Programming Exercise 8.4 - Password-protected Mortgage Calculator, v.1.0;

#include <string>
#include <cmath>
#include <stdlib.h>
#include <iostream>

using namespace std;

void passwordValidation()
{
    string password = "Rumpelstiltskin";
    string userInput;
    int count = 0;
    while (userInput != password)
    {
        cout<< "\n" << "Enter the password: ";
        cin >> userInput;
        if (userInput != password)
        {
            cout << "INVALID!";
            count++;
        }

        if(count == 3){
            exit(3);
        }
    }
}

int main()
{

    passwordValidation();
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