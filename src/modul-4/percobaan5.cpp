#include <iostream>
#include <cmath>

using namespace std;
int main() {
  double x, y;
  
  cout << "Masukkan nilai x: ";
  cin >> x;

  y = (7 * pow(x, 3)) + (2 * pow(x, 2)) - (5 * x) + 2;
  cout << "Nilai y adalah " << y;
  return 0;
}   