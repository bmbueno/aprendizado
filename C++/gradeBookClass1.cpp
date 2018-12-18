#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class gradeBook
{
public:
  void displayMessage(string courseName)
  {
    cout << "Welcome to the grade book for " << courseName << "!" << endl;
  }
};

int main()
{
  string courseName;
  gradeBook myGrade;

  cout << "Enter the course name: ";
  getline(cin, courseName);               // leitura de string do teclado


  myGrade.displayMessage(courseName);

  return 0;
}
