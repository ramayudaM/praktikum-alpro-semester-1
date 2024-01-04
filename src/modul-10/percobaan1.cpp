#include <iostream>
#include <fstream>

using namespace std;
int main() {
  char letter = ' ';
  ofstream outFile;
  outFile.open("Data.txt");

  if (outFile.is_open()) {
    for (int x = 1; x < 11; x += 1) {
      cout << "Enter letter " << x << ": ";
      cin >> letter;
      letter = toupper(letter);
      outFile << letter << endl;
    } 

    outFile.close();
  
  } else cout << "Can't open the Data.txt file ." << endl;
  
  return 0;
}

/*
Access FIle (Judul)

Tujuan percobaan bukan list tapi paragraf
Min 1,5 Teori dasar
Adapun prosedur percobaan bebagai berikut

khusus bab 5, buat halaman baru setelah source code, halaman baru output
kesimpulan min 5
Daftar Pustaka: urut abjad, klik kanan by ascending
source code -> penjelasan, output -> penejelasan, file -> penjelasan
tanggal 17
*/
