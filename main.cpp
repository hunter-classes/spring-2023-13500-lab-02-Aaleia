/*
Author: Aaleia Fernando
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2B

In funcs.cpp write a void function that will accept two integer parameters and will print out all integers in the range L ≤ i < U separated by spaces. Test this function by calling it from the main function which should be defined in main.cpp. Make sure to include sufficient tests to from main to show that this works.
*/

#include <iostream>
#include "funcs.h"

int main() {
  std::cout << "Range 5 ≤ i < 12: ";
  print_interval(5,12);
  std::cout << "Range -4 ≤ i < 0: ";
  print_interval(-4,0);
  std::cout << "Range -1 ≤ i < 1: ";
  print_interval(-1,1);
}
