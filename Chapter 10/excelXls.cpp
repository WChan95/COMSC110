// Wilson Chan
// Programming Exercise 10.8

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

void changeTendered(int amountTendered, int cashPayment)
{

    ofstream fout;
    fout.open("change.xls");
    if (!fout.good())
        throw "I/O error";

    fout << "denomination" << '\t' << "count" << endl; // header row;

    int changeDue = amountTendered - cashPayment;


    int hundredThousands = changeDue / 100000;
    changeDue = changeDue % 100000;

    int tenThousands = changeDue / 10000;
    changeDue = changeDue % 10000;

    int fiveThousands = changeDue / 5000;
    changeDue = changeDue % 5000;

    int thousand = changeDue / 1000;
    changeDue = changeDue % 1000;

    int fiveHundreds = changeDue / 500;
    changeDue = changeDue % 500;

    int hundred = changeDue / 100;
    changeDue = changeDue % 100;

    int fifty = changeDue / 50;
    changeDue = changeDue % 50;

    int twenty = changeDue / 20;
    changeDue = changeDue % 20;

    int ten = changeDue / 10;
    changeDue = changeDue % 10;

    int five = changeDue / 5;
    changeDue = changeDue % 5;

    int two = changeDue / 2;
    changeDue = changeDue % 2;

    int one = changeDue / 1;
    changeDue = changeDue % 1;

    // Will only show if the bills are not 0
    if (hundredThousands != 0)
    {
        fout << 100000 << '\t' << hundredThousands << endl;
    }

    if (tenThousands != 0)
    {
        fout << 10000 << '\t' << tenThousands << endl;
    }
    if (fiveThousands != 0)
    {
        fout << 5000 << '\t' << fiveThousands << endl;
    }
    if (thousand != 0)
    {
        fout << 1000 << '\t' << thousand << endl;
    }
    if (fiveHundreds != 0)
    {
        fout << 500 << '\t' << fiveHundreds << endl;
    }
    if (hundred != 0)
    {
        fout << 100 << '\t' << hundred << endl;
    }

    if (fifty != 0)
    {
        fout << 50 << '\t' << fifty << endl;
    }
    if (twenty != 0)
    {
        fout << 20 << '\t' << twenty << endl;
    }
    if (ten != 0)
    {

        fout << 10 << '\t' << ten << endl;
    }
    if (five != 0)
    {

        fout << 5 << '\t' << five << endl;
    }
    if (two != 0)
    {
        fout << 2 << '\t' << two << endl;
    }
    if (one != 0)
    {
        fout << 1 << '\t' << one << endl;
    }
}

int main()
{
    int cashPayment;
    int amountTendered;
    int isQuit;

    while (isQuit != 0)
    {
        cout << "[enter 0 to exit]" << endl;
        while (cashPayment != 0)
        {
            cout << "Cash payment amount: ";
            cin >> cashPayment;
            isQuit = cashPayment;
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

        if (isQuit == 0)
        {
            break;
        }
        while (amountTendered != 0)
        {
            cout << "Tendered amount ";
            cin >> amountTendered;
            isQuit = amountTendered;
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

        if (isQuit == 0)
        {
            break;
        }
        changeTendered(amountTendered, cashPayment);
    }

    /* changeTendered(amountTendered, cashPayment); */
}
