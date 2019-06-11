#include <iostream>
#include <stdlib.h>
//Rock Paper Scissors Program

int main(){
  //Live long and prosper
  srand(time(NULL));
  //computer picks a random number between 1 and 3
  int computer = rand() % 3 + 1;
  //user input
  int user = 0;
  //user prompts
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
	std::cout << "3) ✌️\n";
  std::cout << "Shoot!\n";
  std::cin >> user;
  
  //Determine the winner
  //Prints what the computer chose
  std::cout << "Computer picked " << computer << "\n";
  if(user == computer){
    std::cout << "It's a tie!\n";
  }
  else if(user == 1){
    if(computer == 2){
      std::cout << "Paper beats rock! Computer wins!\n";
    } else{
      std::cout << "Rock beats scissors! You win!\n";
    }
  }
  else if(user == 2){
    if(computer == 1){
      std::cout << "Paper beats rock! You win!\n";
    } else{
      std::cout << "Scissors beats papaer! Computer wins!\n";
    }
  }
  else if(user == 3){
    if(computer == 2){
      std::cout << "Scissors beats paper! You win!\n";
    } else{
      std::cout << "Rock beats scissors! Computer wins!\n";
    }
  }
}
