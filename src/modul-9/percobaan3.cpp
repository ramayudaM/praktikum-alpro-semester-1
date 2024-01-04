#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  string namaHari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
  double suhuHarian[7][2];
  double totalSuhuTerendah = 0, totalSuhuTertinggi = 0;
  double rataRataSuhuTerendah, rataRataSuhuTertinggi;

  for (int i = 0; i < 7; i++) {
    cout << "Masukkan Suhu hari " << namaHari[i] << endl;

    for (int j = 0; j < 2; j++) {
      if (j == 0) cout << "Suhu Terendah: ";
      else cout << "Suhu Tertinggi: ";

      cin >> suhuHarian[i][j];
    }
  }

  cout << endl;
  cout << "==========================================" << endl;
  cout << "| Hari  | Suhu Terendah | Suhu Tertinggi |" << endl; 
  cout << "==========================================" << endl;

  for (int i = 0; i < 7; i++) {
    cout << "|" << setw(6) << namaHari[i] << "|";

    for (int j = 0; j < 2; j++) {
      totalSuhuTerendah += suhuHarian[i][0];
      totalSuhuTertinggi += suhuHarian[i][1];

      cout << setw(15) << suhuHarian[i][j] << "|";
    }

    cout << endl;
  }

  rataRataSuhuTerendah = totalSuhuTerendah / 7.0;
  rataRataSuhuTertinggi = totalSuhuTertinggi / 7.0;

  cout << "==========================================" << endl;
  cout << "|Total Rata-Rata Suhu Terendah  : " << setiosflags(ios::left) << setw(10) << rataRataSuhuTerendah << "|" << endl;
  cout << "|Total Rata-Rata Suhu Tertinggi : " << setiosflags(ios::left) << setw(10) << rataRataSuhuTertinggi << "|" << endl;
  cout << "==========================================" << endl;

  return 0;
}
