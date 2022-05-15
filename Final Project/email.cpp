// Wilson Chan
// COMSC110 - Final Project

// Requirements
// 1. All email addresses must be unique
// 2. Separate each email by semi-colon and space
// 3. Count number of email addresses found and console output results

// Goal:
// Go through each of the input files and identify the emails
// Store emails in an array
// Copy and paste that array to another file

// Lets just start with math2.txt and see what we can output;

#include <fstream>
#include <string>
#include <iostream>

using namespace std;

bool isInvalid(char toCheck)
{
    // Checks if invalid char;
    char invalidChars[21] = {';', ':', '"', ' ', ',', '/', '{', '}', '[', ']', '=', '(', ')', '$', '!', '#', '%', '^', '&', '*', '?'};
    for (int k = 0; k < 21; k++)
    {
        if (toCheck == invalidChars[k])
        {
            return true;
        }
        return false;
    }
}

int main()
{

    string fileName = "math1.txt";
    ifstream fin;
    fin.open(fileName);
    if (!fin.good())
        throw "I/O error";

    int emailCount = 0;
    while (fin.good())
    {
        string line;

        string toPrintEmail = "";

        getline(fin, line);
        for (int i = 0; i < line.length(); i++)
        {
            // Traverses line until we hit "@"
            // Invalid email character = Anything not A-Z, a-z, 0-9, uderscore, dot, hyphen, and a plus
            // From looking at the files, invalid characters involve :, whitespace,
            char check = line[i];
            int beginEmail_index;
            int atEmail_index;
            if (line[i] == '@')
            {
                toPrintEmail = line;
                atEmail_index = i;
                emailCount++;
                for (int j = i; j > -1; j--)
                {
                    if (isInvalid(line[j]))
                    {
                        beginEmail_index = j;
                        break;
                    }
                }

                
            }
        }
        if (toPrintEmail != "")
        {
            cout << toPrintEmail << endl;
        }
    }
    fin.close();
    cout << "Number of emails found: " << emailCount << endl;

    return 0;
}