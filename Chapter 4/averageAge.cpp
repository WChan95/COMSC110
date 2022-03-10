// Wilson Chan
// Programming Exercise 4.4 - Division With Whole Numbers

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int age1 = 19;
    int age2 = 21;
    int age3 = 30;

    
    double average_age =  (age1 + age2 + age3)/3.00;
    
    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);

    cout << average_age << endl;

}
