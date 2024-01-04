#include <iostream>

using namespace std;
int main() {
  double sales, commission, commissionRate = 20.0/100;
  
  cout << "Masukkan Harga (Ketik -1 jika ingin berhenti): ";
  cin >> sales;

  do {
    commission = sales * commissionRate;
    cout << "Hasil komisi adalah: " << commission << endl;

    cout << "Masukkan Harga (Ketik -1 jika ingin berhenti): ";
    cin >> sales;
  } while (sales != -1);
  
  return 0;
}