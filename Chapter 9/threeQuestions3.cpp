// Wilson Chan
// Programming Exercise 9.1

#include <iostream>
#include <cmath>

using namespace std;

bool askQuestion(string question, string answer, string secondaryAnswer = "DEFAULTANSWERONE")
{
    int correct = 0;
    string userInput;
    cout << "\n"
         << question;
    std::getline(cin, userInput);
    if (userInput == answer || userInput == secondaryAnswer)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int correct = 0;
    int total = 0;
    total++;
    if (askQuestion("Who invested computers? ", "Bill Gates", "Gates"))
    {
        correct++;
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect!" << endl;
    }
    total++;
    if (askQuestion("When were computers invented:: ", "1999"))
    {
        correct++;
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect!" << endl;
    }
    total++;
    if (askQuestion("How many computer languages are there? ", "Lots"))
    {
        correct++;
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect!" << endl;
    }

    cout << "That's " << correct << " correct out of " << total << " questions asked." << endl;

    return 0;
}
