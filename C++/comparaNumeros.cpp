#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

int num1, num2;

cout << "Entre com 2 numeros para comparar: ";
cin >> num1 >> num2;

if(num1 > num2)
  cout << num1 << " é maior que " << num2 << endl;

else if(num2 > num1)
  cout << num2 << " é maior que " << num1 << endl;
else
  cout << "São iguais !!\n";
}
