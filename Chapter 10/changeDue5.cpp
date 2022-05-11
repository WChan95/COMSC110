// Wilson Chan
// Programming Exercise 10.1

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

void changeTendered(int amountTendered, int cashPayment)
{
    int changeDue = amountTendered - cashPayment;
    cout << "Change due: " << changeDue << endl;

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
        cout << "this many hundred thousand dollar bills: " << hundredThousands << endl;
    }

    if (tenThousands != 0)
    {
        cout << "this many ten thousand dollar bills: " << tenThousands << endl;
    }
    if (fiveThousands != 0)
    {
        cout << "this many five thousand dollar bills: " << fiveThousands << endl;
    }
    if (thousand != 0)
    {
        cout << "this many thousand dollar bills: " << thousand << endl;
    }
    if (fiveHundreds != 0)
    {
        cout << "this many five hundred dollar bills: " << fiveHundreds << endl;
    }
    if (hundred != 0)
    {
        cout << "this many hundred dollar bills: " << hundred << endl;
    }

    if (fifty != 0)
    {
        cout << "this many fifty dollar bills: " << fifty << endl;
    }
    if (twenty != 0)
    {
        cout << "this many twenty dollar bills: " << twenty << endl;
    }
    if (ten != 0)
    {

        cout << "this many ten dollar bills: " << ten << endl;
    }
    if (five != 0)
    {

        cout << "this many five dollar bills: " << five << endl;
    }
    if (two != 0)
    {
        cout << "this many two dollar bills: " << two << endl;
    }
    if (one != 0)
    {
        cout << "this many one dollar bills: " << one << endl;
    }
}

int main()
{
    int cashPayment;
    int amountTendered;

    string fileName = "change.txt";

    ifstream fin;

    fin.open(fileName);

    if (!fin.good())
    {
        throw "I/O error";
    }

    for (int i = 0; i == 0; i++)
    {
        string line;
        getline(fin, line);
        cashPayment = std::stoi(line);
    }
    for (int i = 1; i == 1; i++)
    {
        string line;
        getline(fin, line);
        amountTendered = std::stoi(line);
    }

    changeTendered(amountTendered, cashPayment);
}

/* changeTendered(amountTendered, cashPayment); */
