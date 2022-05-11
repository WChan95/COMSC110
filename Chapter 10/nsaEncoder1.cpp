// Wilson Chan
// Programming Exercise 10.6

#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{

    string fileName;
    ifstream fin;
    ofstream fout;

    cout << "Enter name of file to encode: " << endl;
    cin >> fileName;

    fin.open(fileName);
    fout.open("secret.txt");

    if(!fin.good()) throw "I/O error";

    while(fin.good()){
        string line;
        getline(fin,line);

        char arr[line.length()];
        strcpy(arr,line.c_str());
        for(int i = 0; i < line.length(); i++){
            arr[i] = arr[i] + 1;
            fout << arr[i];
        }
        fout << endl;
        

    }

    fout.close();
    fin.close();


    return 0;
}