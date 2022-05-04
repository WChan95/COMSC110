// Wilson Chan
// Programming Exercise 8.5

#include <iostream>
#include <cmath>

using namespace std;

void createQuestion(string question, string answer, string secondaryAnswer = "DEFAULTANSWERONE")
{
    string userInput;
    cout << "\n"
         << question;
    std::getline(cin, userInput);
    if (userInput == answer|| userInput == secondaryAnswer)
    {
        cout << "Correct!";
    }
    else
    {
        cout << "Incorrect!";
    }
}

int main()
{
    createQuestion("Who invested computers? ", "Bill Gates","Gates");
    createQuestion("When were computers invented:: ", "1999");
    createQuestion("How many computer languages are there? ", "Lots");

    return 0;
}
