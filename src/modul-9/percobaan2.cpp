#include <iostream>

using namespace std;
double hitungTotalSales(double[3][2]);

int main() {
  double sales[3][2] = {{3567.85, 2589.99}, {3239.67, 2785.55}, {1530.50, 1445.80}};

  double total = hitungTotalSales(sales);

  cout << "Total sales: $" << total << endl;
  return 0;
}

double hitungTotalSales(double data[3][2]) {
  double total = 0.0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      total += data[i][j];
    }
  }
  
  return total;
}
