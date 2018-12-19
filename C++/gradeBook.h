#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::getline;
using std::string;

class gradeBook
{
public:
  gradeBook(string name)
  {
    setCourseName(name);
  }
  void setCourseName(string newName)
  {
    courseName = newName;
  }
  string getCourseName()
  {
    return courseName;
  }

  void displayMessage()
  {
    cout << "Welcome to the grade book for " << getCourseName() << " !";
  }
private:
  string courseName;
};
