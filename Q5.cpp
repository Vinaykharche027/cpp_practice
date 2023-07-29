#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float float_value;
  cout << "Enter a float value: ";
  cin >> float_value;

  int rounded_value = round(float_value);
  cout << "The rounded value is: " << rounded_value << endl;
  return 0;
}