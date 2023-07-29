/* 3.Write a code to get the character 
for ascii value 68,98,120
Output->Character */

#include <iostream>
using namespace std;

int main() {
  char character;
  character = static_cast<char>(68);
  cout << "Character for ASCII value 68: " << character << "\n";
  character = static_cast<char>(98);
  cout << "Character for ASCII value 98: " << character << "\n";
  character = static_cast<char>(120);
  cout << "Character for ASCII value 120: " << character << "\n";
  return 0;
}