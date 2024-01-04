#include <iostream>

using namespace std;
int main() {
  int minimumMenit = 0, jumlahPengguna = 0, panjangArr;

  cout << "Masukkan jumlah data yang ingin diinputkan: ";
  cin >> panjangArr;

  int hasilSurvey[panjangArr];

  for (int i = 0; i < panjangArr; i++) {
    cout << "Masukkan data ke-" << i + 1 << ": ";
    cin >> hasilSurvey[i];
  }

  cout << "Jumlah menit minimum? ";
  cin >> minimumMenit;

  for (int i = 0; i < panjangArr; i++) {
    if (hasilSurvey[i] > minimumMenit) {
      jumlahPengguna++;
    }
  }

  cout << "Jumlah pengguna yang menghabiskan waktu lebih dari ";
  cout << minimumMenit << " menit adalah " << jumlahPengguna << " orang." << endl;
}