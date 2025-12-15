//checking cat's age
#include <iostream>

int main() {
  std::cout << "Welcome to the Cat Years program!\n";
  std::cout << "This only works for cats older than 2 years old\n";
  int age , human ;
  std::cout << "Enter your cat's age: ";
  std::cin >> age;
  std::cout<< (age-2)*4+24;
  std::cin >> human;
  std::cout << human;
  std::cout<< "Your cat is" , human , "old in human years";
}
