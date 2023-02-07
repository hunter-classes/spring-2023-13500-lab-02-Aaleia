/*
Author: Aaleia Fernando
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2A

Write a program that asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input. After a valid value is obtained, print this number n squared.
*/

#include <iostream>

int main() {
  int integer;
  std::cout << "Enter an integer: ";
  std::cin >> integer;
  while (integer < 1 || integer > 99) {
    std::cout << "Re-enter an integer: ";
    std::cin >> integer;
  }
  if (integer > 0 && integer < 100) {
    std::cout << integer * integer << std::endl;
  }
}
