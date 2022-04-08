// Wilson Chan
// Programming Exercise 6.5 - Coin Toss, v.1.0

#include <iostream>
#include <stdlib.h> /*srand, rand*/
#include <time.h> /*time*/

using namespace std;

int main()
{
    //init random seed
    srand(time(NULL));
    int coinTossed = rand() & 1; // generates 1 or 0
    if(coinTossed == 1){
        cout << "Heads";
    }else{
        cout << "Tails";
    }
}

//Expect
//Heads