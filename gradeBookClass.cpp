#include <iostream>

using std::endl;
using std::cout;

class gradeBook             // declaraçao de classe
{
public:                     // definição de acesso a metodos da classe
  void displayMessage()     // 1° método da classe gradeBook
  {
    cout << "Welcome to the gradeBook !! " << endl;
  }
};

int main() {
  gradeBook myGrade;

  myGrade.displayMessage();
  return 0;
}
