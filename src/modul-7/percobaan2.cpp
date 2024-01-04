#include <iostream>
#include <cmath>

using namespace std;
double sisiMiring(double sisiA, double sisiB);

int main()
{
  double sisiA = 0.0;
  double sisiB = 0.0;

  cout << "Panjang sisi A: ";
  cin >> sisiA;
  cout << "Panjang sisi B: ";
  cin >> sisiB;

  cout << "Panjang sisi miring: " << sisiMiring(sisiA, sisiB) << endl;
  return 0;
}

double sisiMiring(double sisiA, double sisiB)
{
  double jumlahPangkat = pow(sisiA, 2) + pow(sisiB, 2);
  return sqrt(jumlahPangkat);
}