// Wilson Chan
// Programming Exercise 10.4 - About Lighthouses, v3.0

#include <string>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{

    double height;
    string fileName = "lighthouse.txt";

    ifstream fin;
    fin.open(fileName);
    for(int i = 0; i == 0; i++){
        string line;
        getline(fin, line);
        height = std::stod(line);
    }

    double miles = sqrt(height * 0.8);
    cout.setf(ios::fixed);
    cout << setprecision(0);
    cout << "A " << height << " foot tall light can be seen from " << miles << " miles away";
}