#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
int main() {
  ofstream outNumbers;
  outNumbers.open("Data2.txt");
  int data[100];

  for (int i = 0; i < 100; i++) {
    if (data[i] < 0) {
      outNumbers << data[i];
    }
  }

  if (outNumbers.is_open()) {
    for (int x = 10; x < 26; x += 1)
      outNumbers << x << '#' << pow(x, 2.0) << endl;

    outNumbers.close();
    cout << "Numbers saved in file." << endl;
  
  } else cout << "Can't open the Data2.txt file." << endl;
  
  return 0;
}
