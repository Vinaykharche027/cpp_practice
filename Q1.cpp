/* Q1: Write a program to print the below output:
input->
Hello World
output->
Hello World->*/

#include <iostream>
using namespace std;

int main() {
  string x;
  cout << "Type a line: ";
  getline(cin, x); 
  cout << "Your line is: " << x;
  return 0;
}