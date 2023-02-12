/*
Author: Aaleia Fernando
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2C

Write a program that creates an array of 10 integers, and provides the user with an interface to edit any of its elements. The program should keep running until the user inputs an out-of-range (invalid) index.
*/

#include <iostream>

int main() {
  
  int myData[10];
  int index;
  int value;
  
  for (int i = 0; i < 10; i++){
    myData[i] = 1;
  }
  
  do {

    for (int i = 0; i < 10; i++){
      std::cout << myData[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Input index: ";
    std::cin >> index;
    std::cout << "Input value: ";
    std::cin >> value;

    if (index >= 0 && index < 10) {
      myData[index] = value;
    } else {
      std::cout << "Index is out of range." << std::endl;
    }
  } while (index >= 0 && index < 10);

  return 0;
}
