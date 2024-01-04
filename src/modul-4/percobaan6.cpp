#include <iostream>
#include <cmath>

using namespace std;
int main() {
  double bunga, jumlahPinjaman, jumlahTahun, pembayaran;

  cout << "Masukkan jumlah peminjaman (Rp): ";
  cin >> jumlahPinjaman;
  
  cout << "Masukkan bunga peminjaman (%): ";
  cin >> bunga;

  cout << "Masukkan jumlah Tahun peminjaman: ";
  cin >> jumlahTahun;
  
  bunga /= 100;
  pembayaran = (bunga * (jumlahPinjaman / 12)) / (1 - pow((((bunga / 12) + 1)), -12 * jumlahTahun));
  cout << "Jumlah yang harus dibayar perbulah adalah Rp. " << pembayaran;

  return 0;
}   