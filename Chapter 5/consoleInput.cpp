//Wilson Chan
//Programming Exercise 5.6 - Programs with Multiple Data Entries

#include <string>
#include <iostream>

using namespace std;

int main(){
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cin.ignore();

    cout << "Enter your name: ";
    string name;
    getline(cin, name);

    cout << "Enter the temeprature outside right now (degrees F): ";
    double temperature;
    cin >> temperature;
    cin.ignore();
    
    cout << "What city are you in right now? ";
    string city;
    getline(cin, city);

    cout << name << " is " << age << " years old." << endl;
    cout << "It's " << temperature << " degrees F in " << city << ".";

    
}