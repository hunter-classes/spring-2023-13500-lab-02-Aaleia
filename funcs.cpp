/*
Author: Aaleia Fernando
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2B
In funcs.cpp write a void function that will accept two integer parameters and will print out all integers in the range L ≤ i < U separated by spaces. Test this function by calling it from the main function which should be defined in main.cpp. Make sure to include sufficient tests to from main to show that this works.
*/

#include <iostream>
#include "funcs.h"

void print_interval(int L,int U) {
  for (int i = L; i < U; i++) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}
