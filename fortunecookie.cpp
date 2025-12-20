//Create a fortune_cookie.cpp program that gives the user random fortunes from
#include <iostream>
#include <cstdlib>

int main() {
  srand(time(NULL));
  std::cout << "enter cookie number picked";
  int fortunecookie = std::rand()%6;
  std::cout << "enter cookie number picked";
  std ::cout << fortunecookie;
  if(fortunecookie = 1){
    std::cout<<"Don't pursue happiness – create it.";
  }
  else if(fortunecookie = 2){
    std::cout<<"All things are difficult before they are easy";
  }
  else if(fortunecookie = 3){
    std::cout<<"The early bird gets the worm, but the second mouse gets the cheese.";
  }
  else if(fortunecookie = 4){
    std::cout<<"Someone in your life needs a letter from you.";
  }
  else if(fortunecookie = 5){
    std::cout<<"The fortune you search for is in another cookie";
  }
  else(fortunecookie = 6);
    std::cout<<"Help! I'm being held prisoner in a Chinese bakery!";
}
