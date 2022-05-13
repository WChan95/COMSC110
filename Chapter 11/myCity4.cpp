// Wilson Chan
// Programming Exercise 11.3 - myCity4

#include <string>
#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    int temps[size] = {};
    string days[size] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
    int daysNum[size] = {18, 19, 20, 21, 22};
    for (int i = 0; i < size; i++)
    {
        cout << "Please input a temperature: ";
        int askTemperature;
        cin >> askTemperature;

        temps[i] = askTemperature;
    }
    cout << "Cupertino, California forecast high temperatures" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << days[i] << ", Feb " << daysNum[i] << ", " << temps[i] << " degrees" << endl;
    }
    cout << "source: weather.com";

    int highest = temps[0];
    int lowest = temps[0];
    int highestCount = 0;
    int lowestCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (temps[i] > highest)
        {
            highest = temps[i];
        }
        else if (temps[i] == highest)
        {
            highestCount++;
        }
        if (temps[i] < lowest)
        {
            lowest = temps[i];
        }
        else if (temps[i] == lowest)
        {
            lowestCount++;
        }
    }
    cout << "The high for the week is " << highest << " degrees, occuring " << highestCount << " times" << endl;
    cout << "The low for the week is " << lowest << " degrees, occuring " << lowestCount << " times" << endl;

    return 0;
}

/*   Cupertino, California forecast high temperatures:
  Friday, Feb 18, 69 degrees
  Saturday, Feb 19, 71 degrees
  Sunday, Feb 20, 64 degrees
  Monday, Feb 21, 58 degrees
  Tuesday, Feb 22, 55 degrees
  source: weather.com */