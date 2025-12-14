//Create a mom.cpp program that asks the user for two numbers, month1 and month2, and then calculates the change.
//MoM= (month2−month1) / month1 ∗100
#include <iostream>

int main() {
  double month1 , month2 ;
  std::cout << "Enter the value in month1: ";
  std::cin >> month1;
  std::cout << "Enter the value in month2: ";
  std::cin>> month2;
  double result = (month2 - month1) / month1 * 100;
  return 0;
}
