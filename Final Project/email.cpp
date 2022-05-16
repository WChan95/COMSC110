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

bool isValid(char c)
{
    // Returns true if character is a valid email character
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '.' || c == '-' || c == '+')
    {
        return true;
    }
    return false;
}

int main()
{
    string inputFile;
    string defaultInputFile = "fileContainingEmails.txt ";
    string outputFile;
    string defaultOutputFile = "copyPasteMyEmails.txt ";

    cout << "Enter input file name (Press enter for default): ";
    getline(cin, inputFile);
    if (inputFile == "")
    {
        inputFile = defaultInputFile;
    }

    cout << "Enter output file name (Press enter for default): ";
    getline(cin, outputFile);
    if (outputFile == "")
    {
        outputFile = defaultOutputFile;
    }

    ifstream fin;

    fin.open(inputFile);
    if (!fin.good())
        throw "I/O error";

    int emailCount = 0;

    const int total_emails = 100000;
    string emails[total_emails];

    while (fin.good())
    {
        string line;

        string toPrintEmail = "";

        getline(fin, line);
        for (int i = 0; i < line.length(); i++)
        {
            // Traverses line until we hit "@"e
            // Invalid email character = Anything not A-Z, a-z, 0-9, uderscore, dot, hyphen, and a plus
            // From looking at the files, invalid characters involve :, whitespace,
            char check = line[i];

            if (line[i] == '@')
            {
                toPrintEmail = line;
                int beforeEmail;
                int afterEmail;
                bool hasPeriod = false; // check if there is period

                for (int j = i - 1; j > -1; j--)
                {
                    // Checks for invalid character
                    if (!isValid(line[j]))
                    {
                        beforeEmail = j;
                        break;
                    }

                    beforeEmail = j;
                }

                for (int k = i + 1; k < line.length(); k++)
                {
                    // Checks for invalid charactere
                    if (!isValid(line[k]))
                    {
                        afterEmail = k;
                        break;
                    }
                    if (line[k] == '.')
                    {
                        hasPeriod = true;
                    }
                    afterEmail = k;
                }

                if (emailCount < total_emails)
                {
                    bool duplicateEmail = false;
                    string email = line.substr(beforeEmail, afterEmail - beforeEmail);
                    for (int i = 0; i < emailCount; i++)
                    {
                        if (email.compare(emails[i]) == 0)
                        {
                            duplicateEmail = true;
                        }
                    }

                    if (!duplicateEmail && hasPeriod)
                    {
                        emails[emailCount++] = email;
                    }
                }
            }
        }
    }
    fin.close();

    if (emailCount > 0)
    {
        ofstream fout;

        fout.open(outputFile);

        if (!fout.good())
            throw "I/O error";

        for (int i = 0; i < emailCount; i++)
        {
            fout << emails[i] + "; ";
        }
        fout.close();
    }
    else
    {
        cout << "No emails were found in " << inputFile << endl;
    }

    cout << emailCount << " emails were found in " << inputFile << ", contents have been pasted over to " << outputFile << endl;
    cout << "Emails may be copied and pasted to the to, cc, or bcc fields." << endl;
    cout << "Tip: It's best practice to CC your boss when emailing your coworkers to passive aggressively remind them of deadlines." << endl;
    cout << "Another tip: BCC is also best practice to protect people's privacy so that everyone's email doesn't get shown. Remember if you're trying to stir up drama, use bcc." << endl;
    return 0;
}