#include <iostream>

using namespace std;
int main() {
  float beratBadan, tinggiBadan, bmi;

  cout << "Program menghitung bmi (body mase index)" << endl;
  cout << "Masukkan berat badan Anda (Kg): ";
  cin >> beratBadan;
  cout << "Masukkan tinggi badan Anda (M): ";
  cin >> tinggiBadan;

  bmi = beratBadan / (tinggiBadan * tinggiBadan);
  cout << "BMI Anda adalah: " << bmi << endl;

  if (bmi < 18.5) 
    cout << "Anda berada pada kategori underweight" << endl;
  else if (bmi >= 18.5 && bmi <= 24.9) 
    cout << "Anda berada pada kategori normal" << endl;
  else if (bmi >= 25 && bmi <= 29.9) 
    cout << "Anda berada pada kategori overweight" << endl;
  else if (bmi >= 30)
    cout << "Anda berada pada kategori obese" << endl;
  else 
    cout << "Kategori tidak dittemukan"  << endl;

  return 0;
}