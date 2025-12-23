#include <iostream>

int main() {
  int age;
  bool citizen , registered;
  std::cout << "Enter your age: ";
  std::cin >> age;
  if(age >= 18){
    std::cout << "You are eligible to vote";
  }
  else if (age < 18){
    std::cout << "You are not old enough to vote";
  }
  else if (!citizen){
    std::cout << "You are not eligible to vote";
  }
  else if (!registered){
    std ::cout << "you need to register";
  }
}
