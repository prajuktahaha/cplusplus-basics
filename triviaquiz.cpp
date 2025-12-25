#include <iostream>

int main() {
  int option;
  std::cout<<"What is the name of the world's longest river?\n";
  std :: cout << 1 << "Missouri River\n";
  std :: cout << 2 << "Nile\n";
  std :: cout << 3 << "Amazon River\n";
  std :: cout << 4 << "Yangtze River\n";
  std :: cin >> option;
  if (option == 1){
    std::cout << "wrong answer";
  }
  else if (option == 2){
    std::cout << "correct answer";
  }
  else if (option == 3){
    std::cout << "wrong nswer";
  }
  else if (option == 4){
    std::cout << "wrong answer";
  }
  return 0;
}
