#include <iostream>

using namespace std;
int main() {
  double hasilSurvey[12] = {20.4, 30.4, 25.2, 15.8, 90.1, 34.6, 21.5, 17.2, 40.3, 55.4, 34.4, 38.1};
  double minimumMenit = 0;
  int jumlahPengguna = 0;

  cout << "Jumlah menit minimum? ";
  cin >> minimumMenit;

  for (int i = 0; i < 12; i++) {
    if (hasilSurvey[i] > minimumMenit) {
      jumlahPengguna++;
    }
  }

  cout << "Jumlah pengguna yang menghabiskan waktu lebih dari ";
  cout << minimumMenit << " menit adalah " << jumlahPengguna << " orang." << endl;
}