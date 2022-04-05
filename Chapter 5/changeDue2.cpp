// Wilson CHan
// Programming Exercise 5.3 - Making Change v.2.0

#include <string>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{

    int cashPayment;
    int amountTendered;

    while (true)
    {
        cout << "Cash payment amount: ";
        cin >> cashPayment;
        if (cashPayment < 0)
        {
            cin.fail();
            cin.clear();
            cin.ignore();
            cout << "Error, cash payment must not be zero or negative." << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Tendered amount ";
        cin >> amountTendered;
        if (amountTendered < cashPayment)
        {
            cin.fail();
            cin.clear();
            cin.ignore();
            cout << "Error, amount tendered must be greater than or equal to cash payment." << endl;
        }
        else
        {
            break;
        }
    }

    int changeDue = amountTendered - cashPayment;
    cout << "Change due: " << changeDue << endl;

    int hundredThousands = changeDue / 100000;
    changeDue = changeDue % 100000;
    cout << "this many hundred thousand dollar bills: " << hundredThousands << endl;
    int tenThousands = changeDue / 10000;
    changeDue = changeDue % 10000;
    cout << "this many ten thousand dollar bills: " << tenThousands << endl;
    int fiveThousands = changeDue / 5000;
    changeDue = changeDue % 5000;
    cout << "this many five thousand dollar bills: " << fiveThousands << endl;
    int thousand = changeDue / 1000;
    changeDue = changeDue % 1000;
    cout << "this many thousand dollar bills: " << thousand << endl;
    int fiveHundreds = changeDue / 500;
    changeDue = changeDue % 500;
    cout << "this many five hundred dollar bills: " << fiveHundreds << endl;
    int hundred = changeDue / 100;
    changeDue = changeDue % 100;
    cout << "this many hundred dollar bills: " << hundred << endl;
    int fifty = changeDue / 50;
    changeDue = changeDue % 50;
    cout << "this many fifty dollar bills: " << fifty << endl;
    int twenty = changeDue / 20;
    changeDue = changeDue % 20;
    cout << "this many twenty dollar bills: " << twenty << endl;
    int ten = changeDue / 10;
    changeDue = changeDue % 10;
    cout << "this many ten dollar bills: " << ten << endl;
    int five = changeDue / 5;
    changeDue = changeDue % 5;
    cout << "this many five dollar bills: " << five << endl;
    int two = changeDue / 2;
    changeDue = changeDue % 2;
    cout << "this many two dollar bills: " << two << endl;
    int one = changeDue / 1;
    changeDue = changeDue % 1;
    cout << "this many one dollar bills: " << one << endl;

    return 0;
}