//Codecademy magic 8 ball C++ using if, else if and else statements

#include <iostream>
#include <cstdlib>

int main() {
  // Your future is here
  std::cout << "MAGIC 8-BALL: \n\n";
  
  // Random number generator
  srand(time(NULL));
  int answer = std::rand() % 10;
  //std::cout << answer;
  
  if(answer == 0) {
    std::cout << "It is certain. \n";
  } else if(answer == 1) {
    std::cout << "It is decidedly so. \n";
  } else if(answer == 2) {
    std::cout << "Without a doubt. \n";
  } else if(answer == 3) {
    std::cout << "Most likely.\n";
  } else if(answer == 4) {
    std::cout << "Reply hazy, try again.\n";
  } else if(answer == 5) {
    std::cout << "Better not tell you now.\n";
  } else if(answer == 6) {
    std::cout << "Cannot predict now.\n";
  } else if(answer == 7) {
    std::cout << "Concentrate and ask again.\n";
  } else if(answer == 8) {
    std::cout << "My sources say no.\n";
  } else if(answer == 9) {
    std::cout << "Outlook not so good.\n";
  }
  else {
    std::cout << "Very doubtful. \n";
  }
}
