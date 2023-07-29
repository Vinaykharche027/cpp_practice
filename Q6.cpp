/* Write a code in cpp to read a string input from the user and print the output
input:
deepak Tiwari
Output:
deepak Tiwari
input:priyanka
output:priyanka */

#include <iostream>
using namespace std;

int main() {
  string name;
  cout << "Enter your name : ";
  getline(cin, name); 
  cout << "Your name is : " << name;
  return 0;
}