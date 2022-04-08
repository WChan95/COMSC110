// Wilson Chan
// Programming Exercise 6.6 - Over-Under Guessing Game, v.1.0

#include <iostream>
#include <stdlib.h> /*srand, rand*/
#include <time.h>   /*time*/

using namespace std;

int main()
{

    srand(time(NULL)); // init random seed
    // we need user input
    // we need number to be guessed
    int tobeGuessed = rand() % 10 + 1; // gens number between 1 - 10;
    int playerGuess;

    cout << "I'm thinkingof a number between 1 and 10. Guess what it is: ";
    cin >> playerGuess;
    if (tobeGuessed == playerGuess)
    {
        cout << "That's right -- it's " << tobeGuessed;
    }
    else if (tobeGuessed > playerGuess)
    {
        cout << "That's too low -- it's " << tobeGuessed;
    }
    else if (tobeGuessed < playerGuess)
    {
        cout << "That's too high -- it's " << tobeGuessed;
    }
}