// Wilson Chan
// Programming Exercise 11.7

#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{

    string fileName;
    ifstream fin;
    ofstream fout;

    int encryptArr[5] = {5, -8, -12, -6, -1};

    cout << "Enter name of file to encode: " << endl;
    cin >> fileName;

    fin.open(fileName);
    fout.open("decode.txt");

    if (!fin.good())
        throw "I/O error";

    while (fin.good())
    {
        string line;
        getline(fin, line);

        char arr[line.length()];
        strcpy(arr, line.c_str());

        int numEncrypt;
        int j = 0;
        for (int i = 0; i < line.length(); i++)
        {
            if (j > 4)
            {
                j = 0;
            }
            numEncrypt = encryptArr[j];
            arr[i] = arr[i] - numEncrypt;
            fout << arr[i];
            j++;
        }
        fout << endl;
    }

    fout.close();
    fin.close();

    return 0;
}