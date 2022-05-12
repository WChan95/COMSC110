//Wilson Chan
//Programming Exercise 11.1 - myCity2

#include <string>
#include <iostream>

using namespace std;

int main()
{

  int temps [5] = {69,71,64,58,55};
  int fridayHighTemp = temps[0];
  int satHighTemp = temps[1];
  int sunHighTemp = temps[2];
  int monHighTemp = temps[3];
  int tueHighTemp = temps[4];

  string fridayForecast = "Friday, Feb 18, " + std::to_string(fridayHighTemp) + " degrees";
  string satForecast = "Saturday, Feb 19, " + std::to_string(satHighTemp) + " degrees";
  string sunForecast = "Sunday, Feb 20, " + std::to_string(sunHighTemp) + " degrees";
  string monForecast = "Monday, Feb 21, " + std::to_string(monHighTemp) + " degrees";
  string tueForecast = "Tuesday, Feb 22," + std::to_string(tueHighTemp) + " degrees";

  cout << "Cupertino, California forecast high temperatures" << endl;
  cout << fridayForecast << endl;
  cout << satForecast << endl;
  cout << sunForecast << endl;
  cout << monForecast << endl;
  cout << tueForecast << endl;
  cout << "source: weather.com";

  return 0;
}

/*   Cupertino, California forecast high temperatures:
  Friday, Feb 18, 69 degrees
  Saturday, Feb 19, 71 degrees
  Sunday, Feb 20, 64 degrees
  Monday, Feb 21, 58 degrees
  Tuesday, Feb 22, 55 degrees
  source: weather.com */