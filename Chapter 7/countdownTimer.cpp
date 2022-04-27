// Wilson Chan
// Exercise 7.2 - Counting Backwards

#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int i = 10;
    int oneSecond = 1000000;

    while (i >= 0)
    {
        if(i == 0){
            //When counter reaches 0
            printf("\r%d blast off!", i);
            break;
        }
        printf("\r%d",i);
        fflush(stdout);
        i--;

        //sleeps loop for one second
        usleep(oneSecond);
    }
}