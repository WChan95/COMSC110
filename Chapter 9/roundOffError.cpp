// Wilson Chan
// Programming Exercise 9.4

#include <iostream>
using namespace std;

int main()
{
    float itr = 0.02;
    double count = 0;

    while (count != 2.0)
    {
        count += itr;
        cout << count << endl;
    }
    return 0;
}