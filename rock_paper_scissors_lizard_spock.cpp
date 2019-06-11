#include <iostream>
#include <stdlib.h>
/*This is a program for The Big Bang Theory show's famous game, Rock, Paper, Scissors, Lizard, Spock*/

int main(){
  srand(time(NULL));
  //computer picks a random number between 1 and 5
  int computer = rand() % 5 + 1;
  //user input
  int user = 0;
  //user prompts
  std::cout << "====================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "====================\n";
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
	std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";
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
    } else if(computer == 3){
      std::cout << "Rock beats scissors! You win!\n";
    } else if(computer == 4){
      std::cout << "Rock crushes lizard! You win!\n";
    } else if(computer == 5){
      std::cout << "Spock vaporizes rock! Computer wins!\n";
    }
  }
  else if(user == 2){
    if(computer == 1){
      std::cout << "Paper beats rock! You win!\n";
    } else if(computer == 3){
      std::cout << "Scissors beats papaer! Computer wins!\n";
    } else if(computer == 4){
      std::cout << "Lizard eats paper! Computer wins!\n";
    } else if(computer == 5){
      std::cout << "Paper disproves spock! You win!\n";
    }
  }
  else if(user == 3){
    if(computer == 2){
      std::cout << "Scissors beats paper! You win!\n";
    } else if(computer == 1){
      std::cout << "Rock beats scissors! Computer wins!\n";
    } else if(computer == 4){
      std::cout << "Scissors decapitate lizard! You win!\n";
    } else if(computer == 5){
      std::cout << "Spock smashes scissors! Computer wins!\n";
    }
  }
  else if(user == 4){
    if(computer == 1){
      std::cout << "Rock crushes lizard! Computer wins!\n";
    } else if(computer == 5){
      std::cout << "Lizard poisons spock! You win!\n";
    } else if(computer == 3){
      std::cout << "Scissors decapitate lizard! Computer wins!\n";
    } else if(computer == 2){
      std::cout << "Lizard eats paper! You win!\n";
    }
  }
  else if(user == 5){
    if(computer == 4){
      std::cout << "Lizard poisons spock! Computer wins!\n";
    } else if(computer == 3){
      std::cout << "Spock smashes scissors! You win!\n";
    } else if(computer == 2){
      std::cout << "Paper disproves Spock! Computer wins!\n";
    } else if(computer == 1){
      std::cout << "Spock vaporizes rock! You win!\n";
    }
  }
}
