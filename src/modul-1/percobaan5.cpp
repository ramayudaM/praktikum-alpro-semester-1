#include <iostream>

using namespace std;
int main() {
  float price, taxRate, cost;
  
  cout << "Masukkan Harga Jual: ";
  cin >> price;
  
  cout << "Masukkan Pajak: ";
  cin >> taxRate;

  cost = price * taxRate + price;
  
  cout << "Biaya: " << cost;
  return 0;
}