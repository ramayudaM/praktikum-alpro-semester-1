#include <iostream>

using namespace std;
int main() {
  int hasilSurvey[12] = {20, 30, 25, 15, 90, 34, 21, 17, 40, 55, 34, 38};
  int minimumMenit = 0, jumlahPengguna = 0, totalNilai = 0;
  float rataRata;

  cout << "Jumlah menit minimum? ";
  cin >> minimumMenit;

  for (int i = 0; i < 12; i++) {
    if (hasilSurvey[i] > minimumMenit) {
      jumlahPengguna++;
    }
    totalNilai += hasilSurvey[i];
  }

  rataRata = totalNilai / 12.0;

  cout << "Jumlah pengguna yang menghabiskan waktu lebih dari ";
  cout << minimumMenit << " menit adalah " << jumlahPengguna << " orang." << endl;
  cout << "Rata-rata menit adalah " << rataRata;
}