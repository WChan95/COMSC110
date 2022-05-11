// Wilson Chan
// Programming Exercise 9.2

#include <iostream>
#include <string>

#include <sstream>

using namespace std;

int main()
{

    string string_example;
    cout << "Enter a line of text:" << endl;
    getline(cin, string_example);

    char arr[string_example.length()];

    strcpy(arr, string_example.c_str());

    for (int i = 0; i < string_example.length(); i++)
    {
        arr[i] = arr[i] + 1;
        cout << arr[i];
    }

    return 0;
}