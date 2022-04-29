// Wilson Chan
// Programming Exercise 7.7

#include <iostream>
#include <string>
#include <stdlib.h> /*srand, rand*/
#include <time.h>   /*time*/

using namespace std;

string getFace(int val)
{

    // Values: 2 - 10 = value, 11 = Jack, 12 = Queen, 13 = King, 14 = Ace

    if (val == 11)
    {
        return "Jack";
    }
    else if (val == 12)
    {
        return "Queen";
    }
    else if (val == 13)
    {
        return "King";
    }
    else if (val == 14)
    {
        return "Ace";
    }
    else
    {
        return to_string(val);
    }
    return "";
}
string getSuit(int suit)
{
    // Suits: 0 = Spades, 1 = Diamonds, 2 = Hearts, 3 = Clubs
    if (suit == 0)
    {
        return "Spades";
    }
    else if (suit == 1)
    {
        return "Diamonds";
    }
    else if (suit == 2)
    {
        return "Hearts";
    }
    else if (suit == 3)
    {
        return "Clubs";
    }
    return "";
}
string cardOutput(string player, int val, int suit)
// formats card string output based on player, card value, and card suit
{
    string output = player + "'s card is a " + getFace(val) + " of " + getSuit(suit);
    return output;
}
string determineWinner(int humanVal, int computerVal)
{
    if (humanVal == computerVal)
    {
        // for draw condition
        return "It's a tie.";
    }
    else if (humanVal > computerVal)
    {
        // human player wins
        return "Human wins!";
    }
    else if (humanVal < computerVal)
    {
        // computer wins
        return "Computer wins!";
    }
}
int main()
{

    // Victory determined by value suit, have no factor on game conditions
    srand(time(NULL)); // init time seed

    while (true)
    {
        int computerVal = rand() % 14 + 2;
        int computerSuit = rand() % 3;
        int humanVal = rand() % 14 + 2;
        int humanSuit = rand() % 3;
        string keepPlaying;

        cout << cardOutput("Computer", computerVal, computerSuit) << endl;
        cout << cardOutput("Human", humanVal, humanSuit) << endl;
        string whoWon = determineWinner(humanVal, computerVal);
        cout << "--<< " << whoWon << " >>--" << endl;

        while (true)
        {
            cout << "Continue? [Y/N] ";
            cin >> keepPlaying;
            if (keepPlaying == "y" || keepPlaying == "Y")
            {
                break;
            }
            else if (keepPlaying == "n" || keepPlaying == "N")
            {
                break;
            }
            else
            {
                continue;
            }
        }

        
        if (keepPlaying == "n" || keepPlaying == "N")
        {
            break;
        }
        else
        {
            continue;
            ;
        }
    }
}