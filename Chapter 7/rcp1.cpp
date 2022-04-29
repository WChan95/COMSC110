// Wilson Chan
// Programming Exercise 7.8 - The Rock-Scissors-Paper Game

#include <iostream>
#include <string>
#include <cctype>
#include <stdlib.h> /*srand, rand*/
#include <time.h>   /*time*/

using namespace std;

char computerPick()
{
    // generates number between 0(rock), 1(paper), 2(scissors);
    int computerGen = (rand() % 2) + 0;
    if (computerGen == 0)
    {
        return 'R';
    }
    else if (computerGen == 1)
    {
        return 'P';
    }
    else if (computerGen == 2)
    {
        return 'S';
    }
}

string determineWinner(char player, char computer)
{
    if (player == computer)
    {
        return "tie";
    }
    else if (player == 'R' && computer == 'S' || player == 'S' && computer == 'P' || player == 'P' && computer == 'R')
    {
        return "Player wins";
    }
    else if (computer == 'R' && player == 'S' || computer == 'S' && player == 'P' || computer == 'P' && player == 'R')
    {
        return "Computer wins";
    }
}

int main()
{
    // init random seed
    srand(time(NULL));

    int humanWins = 0;
    int computerWins = 0;

    string playerPick;

    while (playerPick != "q")
    {
        cout << "Choose: [[Rock,Paper,Scissors,Quit]: ";
        cin >> playerPick;
        char playerPickCast = static_cast<char>(toupper(playerPick[0]));
        char computerPickCast = computerPick();

        string whoWon = determineWinner(playerPickCast, computerPickCast);

        if (whoWon == "Computer wins")
        {
            computerWins++;
        }
        else if (whoWon == "Player wins")
        {
            humanWins++;
        }

        cout << "Computer: " << computerPickCast << " ,Human: " << playerPickCast << " ," << whoWon << endl;
        cout << "Computer wins: " << computerWins << endl;
        cout << "Human wins: " << humanWins << endl;
    }
}