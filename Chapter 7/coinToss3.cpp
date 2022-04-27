// Wilson Chan
// Programming Exercise 7.5

#include <iostream>
#include <stdlib.h> /*srand, rand*/
#include <time.h>   /*time*/

using namespace std;

int main()
{
    // init random seed
    srand(time(NULL));

    // user sets how much to toss
    int numberOfTosses;
    int i;

    // Keeps track of how many times heads or tails has been recorded
    int heads = 0;
    int tails = 0;

    int isQuit;

    while (true)
    {
        cout << "Enter the number of tosses to perform [0=to exit] ";
        cin >> numberOfTosses;
        isQuit = numberOfTosses;
        if (isQuit == 0)
        {
            break;
        }
        while (numberOfTosses > 0)
        {
            // generates 1 or 0
            int coinTossed = rand() & 1;

            if (coinTossed == 1)
            {
                cout << "Heads" << endl;
                heads++;
            }
            else
            {
                cout << "Tails" << endl;
                tails++;
            }
            numberOfTosses--;
        }
        printf("Heads: %d\n", heads);
        printf("Tails: %d\n", tails);
    }
}

// Expect
// Heads