// Wilson Chan
// Programming Exercise 10.7
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{

    string fileName;
    ifstream fin;


    fileName = "secret.txt";
    fin.open(fileName);


    if(!fin.good()) throw "I/O error";

    while(fin.good()){
        string line;
        getline(fin,line);

        char arr[line.length()];
        strcpy(arr,line.c_str());
        for(int i = 0; i < line.length(); i++){
            arr[i] = arr[i] - 1;
            cout << arr[i];
        }
        cout << endl;
        

    }


    fin.close();


    return 0;
}