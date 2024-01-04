#include <iostream>

using namespace std;
double calcCelsius(double tempF);

int main()
{
  double fahrenheit = 0.0;
  double celsius = 0.0;
  cout << "Enter Fahrenheit temperature: ";
  cin >> fahrenheit;
  celsius = calcCelsius(fahrenheit);
  cout << "Celsius temperature: " << celsius << endl;
  return 0;
}

double calcCelsius(double tempF)
{
  double tempC = 0.0;
  tempC = 5.0 / 9.0 * (tempF - 32.0);
  return tempC;
}