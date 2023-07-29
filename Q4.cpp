/* 4.Write a code to get decimal value from user
input-4.3
output-4.3 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double decimal_value;
  cout << "Enter a decimal value: ";
  cin >> decimal_value;
  cout << fixed << setprecision(2);
  cout << "The decimal value is: " << decimal_value << "\n";
  return 0;
}