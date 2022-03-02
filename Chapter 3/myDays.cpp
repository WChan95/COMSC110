//Wilson Chan
//myDays

#include <string>
#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

int main()
{

    // assume due date is March 1, 2022
    int days = 0;
    days = 365 * 27;
    int leapYear = 1;
    days = days + leapYear;
    int beforeBorn = 240;
    days = days - beforeBorn;
    int afterDue = 305;
    days = days - afterDue;

    cout << "DOB: August 29, 1995" << endl;
    cout << "Due: March 1st, 2022" << endl;
    cout << "Age: " << days << endl;
    return 0;
}

/*     time_t now = time(0);
    char *something = ctime(&now);
    tm *ltm = localtime(&now);

    int todaysYear = 1900 + ltm->tm_year;
    int todaysMonth = 1 + ltm->tm_mon;
    int todaysDay = ltm->tm_mday;

    int birthYear = 1995;
    int birthMonth = 8;
    int birthDay = 29; */