#include <iostream>
#include <fstream>

using namespace std;

string splitData(string data) {
  int pos1 = data.find("#");
  int pos2 = data.find("#", pos1 + 1);

  string npm = data.substr(0, pos1);
  string nama = data.substr(pos1 + 1, pos2 - pos1 - 1);
  string alamat = data.substr(pos2 + 1);

  return npm + "\t" + nama + "\t" + alamat;
}

void addMahasiswa(string filename) {
  string npm, nama, alamat;
  ofstream dataMahasiswa;
  dataMahasiswa.open(filename, ios::app);

  if (dataMahasiswa.is_open()) {
    cout << "Masukkan NPM: ";
    getline(cin, npm);

    cout << "Masukkan Nama: ";
    getline(cin, nama);

    cout << "Masukkan Alamat: ";
    getline(cin, alamat);
    
    dataMahasiswa << npm + "#" + nama + "#" + alamat + "\n";
    dataMahasiswa.close();

    cout << "Data mahasiswa berhasil ditambahkan ke " << filename << endl;

  } else {
    cout << "Gagal membuka file " << filename << " untuk ditulis." << endl;
  }
}

void readMahasiswa(string filename) {
  string output, buffer;
  ifstream dataMahasiswa;
  dataMahasiswa.open(filename, ios::in);

  if (dataMahasiswa.is_open()) {
    cout << "NPM\tNama\tAlamat\n";
    getline(dataMahasiswa, buffer);    
    output.append(splitData(buffer));

    if (output != "") {
      while (getline(dataMahasiswa, buffer)) {  
        output.append("\n" + splitData(buffer));
      }

      cout << output + "\n";
      
    } else {
      cout << "Data mahasiswa tidak ditemukan." << endl;
    }

  } else {
    cout << "Gagal membuka file " << filename << " untuk ditulis." << endl;
  }
}

int main() {
  const string filename = "DataMahasiswa.txt";
  char pilihan;

  do {
    cout << "\nMenu:\n";
    cout << "1. Tambah Data Mahasiswa\n";
    cout << "2. Tampilkan Data Mahasiswa\n";
    cout << "3. Keluar\n";

    cout << "Masukkan Pilihan Anda: ";
    cin >> pilihan;
    cin.ignore();

    cout << endl;

    switch (pilihan) {
      case '1':
        addMahasiswa(filename);
        break;
      
      case '2':
        readMahasiswa(filename);
        break;
      
      default:
        cout << "Pilihan tidak valid. Silahkan coba lagi." << endl;
        break;
    }

  } while (pilihan != '3');

  return 0;
}