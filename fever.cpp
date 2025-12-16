//Write a C++ program that checks if a person has a fever based on their temperature.

//Declare a temp variable and give it your current body temperature.

//If the temperature is greater than or equal to 100°F, the program should output “You have a fever. 🤒”
//Otherwise, it should output “You do not have a fever. 🕺”
#include <iostream>
double temperature(){
  double temp;
  std::cout<<"whats the temperature";
  std::cin>>temp;
  return temp;
}
int main() {
  double temp = temperature();
  if(temp >= 100){
    std::cout<<"You have fever!!";
  }
  else{
    std::cout<<"NO! u dont have fever";
  }
}
