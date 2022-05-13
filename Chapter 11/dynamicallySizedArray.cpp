// Wilson Chan
// Programming Exercise 11.5 - A Dynamically Sied Array

#include <fstream>
#include <iostream>
using namespace std;

int main()
{

    // create array of user-specified size
    int size;
    cout << "How many scores? ";
    cin >> size; // first line in TXT file
    cin.ignore(1000, 10);
    int *score = new int[size];

    // read and save the scores
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter a number ";
        cin >> score[i]; // remaining lines in TXT file
        cin.ignore(1000, 10);
    } // for

    // Sorting the array
    sort(score, score + size);

    // output the scores to the console
    cout << "Sorted: ";
    int lowest = score[0];
    int highest = score[0];
    int sum = 0;
    bool isAEntered = false;
    for (i = 0; i < size; i++)
    {
        cout << score[i] << ' ';
        if (score[i] > highest)
        {
            highest = score[i];
        }
        if (score[i] < lowest)
        {
            lowest = score[i];
        }

        if (score[i] >= 90)
        {
            isAEntered = true;
        }

        sum += score[i];
    }

    cout << endl;
    double average = sum / size;

    cout << "Minimum: " << lowest << endl;
    cout << "Maximum " << highest << endl;
    cout << "Average: " << average << endl;

    if (isAEntered)
    {
        cout << "At least one 'A' grade entered";
    }

} // main