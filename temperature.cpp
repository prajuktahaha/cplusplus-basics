//convert temp fahrenhite to celcius
#include <iostream>

int main() {
  double fahrenhite;
  std::cout << "Enter the temperature:";
  std::cin>>fahrenhite;
  double celcius = (fahrenhite - 32)/1.8;
  std::cout << celcius;
  return 0;
}
