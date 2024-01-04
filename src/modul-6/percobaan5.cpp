#include <iostream>

using namespace std;
int main() {
  int angka;
  
  cout << "Masukkan Jumlah Angka: ";
  cin >> angka;

  for (int i = angka; i >= 1; i--) {

    for (int j = i; j >= 1; j--) {
      cout << "*";
    }
    
    cout << endl;
  }

  return 0;
}