// #include <iostream>
// using namespace std;
// int main() {
//   int x=0;int y=0;int z=0;int result=0;
//   cout<<"Enter three integers: ";cin>>x>>y>>z;
//   result=x*y*z;cout<< "The product is " <<result<< endl;
//   return 0;
// }

#include <iostream>

using namespace std;
int main() {
  int x = 0;
  int y = 0;
  int z = 0;
  int result = 0;
  
  cout << "Enter three integers " << endl;
  cout << "First integers: ";
  cin >> x;
  cout << "Second integers: ";
  cin >> y;
  cout << "Third integers: ";
  cin >> z;

  result = x * y * z;
  cout << "The product is " << result << endl;

  return 0;
}