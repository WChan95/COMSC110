// Wilson Chan
// Programming Exercise 6.1

#include <iostream>
#include <cmath>

using namespace std;

int add(int a, int b)
{
    // adds two integers
    return a + b;
}

int subtract(int a, int b)
{
    // subtracts two integers;
    return a - b;
}

void displayQuestion(int a, int b, string operation)
{
    //displays questions
    if (operation == "+")
    {
        cout << a << " + " << b << " = ";
    }
    else if (operation == "-")
    {
        cout << a << " - " << b << " = ";
    }
}

void isCorrect(int a, int b, string operation, bool correct)
{
    //checks if answer is correct;
    if (correct)
    {
        cout << "Good work – your answer is correct!" << endl;
    }
    else
    {
        if (operation == "+")
        {
            cout << "Nice job, but a better answer is " << add(a, b) << "." << endl;
        }
        else if (operation == "-")
        {
            cout << "Nice job, but a better answer is " << subtract(a, b) << "." << endl;
        }
    }
}

void askQuestions(int a, int b, string operation)
{
    //compilation of all above methods to execute in the following order:
    //asks question
    //takes user input
    //outputs response depending on whether answer is correct
    int answer;
    displayQuestion(a, b, operation);
    cin >> answer;

    bool correct;
    if (answer == add(a, b))
    {
        correct = true;
        isCorrect(a, b, operation, correct);
    }
    else
    {
        correct = false;
        isCorrect(a, b, operation, correct);
    }
};

int main()
{
    askQuestions(3, 5, "+");
    askQuestions(100, 99, "-");
    askQuestions(12, 21, "+");
}

//EXPECT

/* 1 + 2 = 3 
Good work – your answer is correct! 
 
100 - 99 = 1 
Good work – your answer is correct! 
 
12 + 21 = 30 
Nice job, but a better answer is 33. 
  */
 
  
 