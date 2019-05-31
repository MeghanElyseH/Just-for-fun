//Space planet weight conversion project from Codecademy. I added my own twist to it so the solution is quite different.

#include <iostream>

int main() {
  //variables
  double weight;
  int planet_num;
  double planet_weight;
  //user inputs
  std::cout << "Input your earth weight:";
  std::cin >> weight;
  std::cout << "Which planet would you like to travel to? :";
  std::cin >> planet_num;

  switch(planet_num) {
    case 1:
      planet_weight = weight * 0.78;
      break;
    case 2:
      planet_weight = weight * 0.39;
      break;
    case 3:
      planet_weight = weight * 2.65;
      break;
    case 4:
      planet_weight = weight * 1.17;
      break;
    case 5:
      planet_weight = weight * 1.05;
      break;
    case 6:
      planet_weight = weight * 1.23;
      break;
  }
  
  std::cout << "Your weight on " << planet_num << " is " << planet_weight << " \n";
  std::cout << " 1 = Venus\n 2 = Mars\n 3 = Jupiter\n 4 = Saturn\n 5 = Uranus\n 6 = Neptune\n";
  
  
  
}
