*/In video games such as League of Legends and Dota 2, players usually level up through levels and ranks. Codédex also has them.

Find your level on Codédex on your user profile and store it in a level variable.

Write an if, else if, else statement that checks for different levels:

🥉 Bronze: Level 1-5
🥈 Silver: Level 6-10
🥇 Gold: Level 11-15
🏅 Platinum: Level 16-20
💎 Diamond: Level 21 -25
You can also do this using the levels & ranks of your favorite game.*/
  
#include <iostream>
using namespace std;

int game(){
  int level;
  cout<<"whats your level in the game: ";
  cin>>level;
  return level;
}
int main() {
  int level = game();
  if(level >=1 && level <=5){
    cout << "ur in bronze level";
  }
  else if(level >= 6 && level <=10){
    cout << "You are in level silver";
  }
  else if(level >=11 && level <=15){
    cout << "You are in level gold";
  }
  else if(level >=16 && level <= 20){
    cout << "You are in level platinum";
  }
  else if(level >= 21 && level<= 25){
    cout << "You are in level diamond";
  }
  else{
    cout << "you are out of range";
  }
}
