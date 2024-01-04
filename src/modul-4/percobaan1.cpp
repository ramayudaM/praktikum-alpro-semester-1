#include <iostream>

using namespace std;
int main() {
  cout << "Mulai" << endl;
  int quantity = 100;
  float itemCost = 5.35;
  double amountDue = 0.0;
  amountDue = quantity * itemCost + 5;
  cout << amountDue << endl;  
  return 0;
}