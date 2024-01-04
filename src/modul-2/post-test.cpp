#include <iostream>

int main() {
    // Deklarasi variabel
    int bilangan;

    // Meminta pengguna memasukkan bilangan
    std::cout << "Masukkan sebuah bilangan: ";
    std::cin >> bilangan;

    // Menentukan apakah bilangan ganjil atau genap

     if (!(std::cin >> bilangan)) {
        std::cout << bilangan;
        std::cerr << "Input bukan bilangan bulat." << std::endl;
        return 1; // Mengembalikan kode kesalahan
    }
    
    if (bilangan == 0) {
        std::cout << "Anda memasukan angka 0." << std::endl;

    } else if (bilangan % 2 == 0) {
        std::cout << bilangan << " adalah bilangan genap." << std::endl;
    } else {
        std::cout << bilangan << " adalah bilangan ganjil." << std::endl;
    }
  std::cout << bilangan % 2;
    return 0;
}