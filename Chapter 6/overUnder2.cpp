// Wilson Chan
// Programming Exercise 6.7 - Over-Under Guessing Game, v.2.0

#include <iostream>
#include <stdlib.h> /*srand, rand*/
#include <time.h>   /*time*/

using namespace std;

int main()
{

    srand(time(NULL)); // init random seed
    // we need user input
    // we need number to be guessed
    int tobeGuessed = rand() % 100 + 1; // gens number between 1 - 100;
    int playerGuess;
    cout << "I'm thinking of a number between 1 and 100. Guess what it is: ";
    while (true)
    {
    cin >> playerGuess;
    if (tobeGuessed == playerGuess)
    {
        // player guesses right
        cout << "That's right -- it's " << tobeGuessed;
        break;
    }
    else if (tobeGuessed > playerGuess)
    {
        // player guesses low
        cout << "That's too low -- guess again: ";
    }
    else if (tobeGuessed < playerGuess)
    {
        // player guesses high
        cout << "That's too high -- guess again: ";
    }
    }


}