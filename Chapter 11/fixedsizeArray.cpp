// Wilson Chan
// Programming Exercise 11.4


#include <iostream>
using namespace std;

int main()
{


    // read and save the scores
    int score[4];
    for(int i = 0; i < 4; i++){
        int userInput;
        cout << "Enter a number: ";
        cin >> userInput;
        score[i] = userInput;
    }

    // calculate and output the average
    int scoreTotal = 0;
    for (int i = 0; i < 4; i++)
    {
        scoreTotal += score[i];
    } // for
    double average = scoreTotal / 4.0;
    cout << "The average of 4 numbers is " << average << endl;

    // count #of scores > average
    int nGreater = 0;
    for (int i = 0; i < 4; i++)
    {
        if (score[i] > average)
            nGreater++;
    } // for
    cout << nGreater << " scores are greater than the average." << endl;
} // main