#include <iostream>

using namespace std;
int main() {
  double numberPrices = 0.0, totalPrices = 0.0, price, averagePrices;

  cout << "Masukkan Harga saham : ";
  cin >> price;

  while (price >= 0) {
    numberPrices++;
    totalPrices += price;
    cout << "Masukkan Harga saham : ";
    cin >> price;
  }

  cout << endl;

  if (numberPrices > 0) {
    averagePrices = totalPrices / numberPrices;

    cout << "Jumlah saham : " << numberPrices << endl;
    cout << "Total Harga Saham : " << totalPrices << endl;
    cout << "Rata-rata harga saham : " << averagePrices << endl;

  } else {
    cout << "Harga saham tidak ditemukan";
  }

  return 0;
}