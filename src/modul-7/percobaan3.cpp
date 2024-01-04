#include <iostream>
#include <cmath>

using namespace std;

double inToCm(double inchi);
double cmToIn(double cm);

int main()
{
  double nilai, hasilKonversi;
  int option;

  cout << "1. Inchi -> Sentimeter" << endl;
  cout << "2. Sentimeter -> Inchi" << endl;

  cout << "Masukkan nomor pilihan: ";
  cin >> option;

  switch (option)
  {
  case 1:
    cout << endl
         << "Masukkan nilai dalam inchi: ";
    cin >> nilai;

    hasilKonversi = inToCm(nilai);
    cout << "Hasil inchi -> sentimeter adalah " << hasilKonversi << endl;

    break;

  case 2:
    cout << endl
         << "Masukkan nilai dalam sentimeter: ";
    cin >> nilai;

    hasilKonversi = cmToIn(nilai);
    cout << "Hasil sentimeter -> inchi adalah " << hasilKonversi << endl;

    break;

  default:
    cout << "Nomor pilihan tidak ditemukan." << endl;
    break;
  }

  return 0;
}

double inToCm(double inchi) { return inchi * 2.54; }
double cmToIn(double cm) { return cm / 2.54; }
