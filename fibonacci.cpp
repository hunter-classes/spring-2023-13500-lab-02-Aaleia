/*
Author: Aaleia Fernando
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2D

Write a program that uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>

int main() {
  int fib[60];
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i <= 60; i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }
  for (int i = 0; i <= 60; i++) {
    std::cout << fib[i] << std::endl;
  }
  return 0;
}

// The numbers start diverging from what they should be because the variable reaches its capacity in the 2 billions and starts to overflow.
