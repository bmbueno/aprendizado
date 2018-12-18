#include <iostream>

int main(){

  int num1, num2, soma;

  std::cout << "Digite um numero: ";
  std::cin >> num1;
  std::cout << "Digite outro numero: ";
  std::cin >> num2;

  soma = num1 + num2;
  std::cout << "A soma dos numeros eh: " << soma << std::endl;

  return 0;


}
