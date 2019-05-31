//C++ code via codecademy for the currency conversion calculator
#include <iostream>

int main() {
  //Variables
  double pesos;
  double reais;
  double soles;
  double dollars;
  //User prompt
  std::cout << "Enter number of Columbian Pesos:";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais:";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles:";
  std::cin >> soles;
  /* Conversion Rates:
  1 peso = 0.051 USD; 1 reais = 0.25 USD; 1 soles = 0.30 USD*/
  double conversion_pesos = pesos * 0.051;
  double conversion_reais = reais * 0.25;
  double conversion_soles = soles * 0.30;
  //USD
  dollars = (conversion_pesos + conversion_reais + conversion_soles);
  //Final Output
  std::cout << "US Dollars = $ " << dollars << " \n";
  
  
}
