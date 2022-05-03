// Wilson Chan
// Programming Exercise 8.2 - More Parameters

#include <iostream>
#include <stdlib.h> /*srand, rand*/
#include <time.h>   /*time*/
using namespace std;

void additionProblem()
{

    int topNumber = rand() % 100 + 1;
    int bottomNumber = rand() % 100 + 1;
    int userAnswer;
    cout << "\n\n\n      " << topNumber << " + " << bottomNumber << " = ";
    cin >> userAnswer;
    cin.ignore(1000, 10);

    int theAnswer = topNumber + bottomNumber;
    if (theAnswer == userAnswer)
        cout << "      Correct!" << endl;
    else
        cout << "      Very good, but a better answer is " << theAnswer << endl;

} // additionProblem

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        additionProblem();
    }
} // main