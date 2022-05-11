// Wilson Chan
// Programming Exercise 9.5

#include <iostream>

using namespace std;

int main()
{

    double initial = .05;
    double total = 0;
    int weeks = 0;
    int weeksThousand = 0;
    int weeksMillion = 0;
    int weeksBillion = 0;
    int thousand = 1000;
    int million = 1000000;
    int billion = 1000000000;

    total += initial;

    //Calculates weeks to be a thousandaire
    while (total <= thousand)
    {
        initial = initial * 2;
        total += initial;
        weeks++;
    }
    weeksThousand = weeks;

    //calculates weeks to be a millionaire
    while (total <= million)
    {
        initial = initial * 2;
        total += initial;
        weeks++;
    }
    weeksMillion = weeks;

    //Calculates weeks to be billionaire
    while (total <= billion)
    {
        initial = initial * 2;
        total += initial;
        weeks++;
    }
    weeksBillion = weeks;

    cout << "In " << weeksThousand << " weeks, I will be a thousandaire!" << endl;
    cout << "In " << weeksMillion << " weeks, I will be a millionaire!" << endl;
    cout << "In " << weeksBillion << " weeks, I will be a billionaire!" << endl;
}