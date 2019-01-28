#include <iostream>
#include <string>

#define pi 3.14
#define teste cout << "teste\n"

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){

  int vidas;
  char letra;
  double decimal;
  float decimal2;
  bool vivo;
  string nome;

  cout << "digite um numero de vidas\n";
  cin >> vidas;

  cout << "digite um valor\n";
  cin >> decimal;

  cout << "digite seu nome:\n";
  cin >> nome;

  cout << vidas << "\n" << decimal << "\n" << nome << "\n" << pi << "\n";

  teste;

  return 0;
}
