// Wilson Chan
// Programming Exercise 7.1

#include <iostream>
using namespace std;

int main()
{
    // read a grade from the keyboard (see 5.1)
    char grade;
    cout << "What is your grade? [A, B, C, D, or F]: ";
    cin >> grade;
    cin.ignore(1000, 10);

    switch (grade)
    {
    case 'A':
        cout << "You pass" << endl;
        break;
        /* code */
    case 'B':
        cout << "You pass" << endl;
        break;
    case 'C':
        cout << "You pass" << endl;
        break;
    case 'D':
        cout << "You do not pass" << endl;
        break;
    case 'F':
        cout << "You do not pass" << endl;
        break;
    }
}