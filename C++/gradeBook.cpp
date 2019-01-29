#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::getline;

#include "gradeBook.h"

class gradeBook
{
  gradeBook::gradeBook(string name)
  {
    setCourseName(name);
  }
  void gradeBook::setCourseName(string courseName)
  {
    this.courseName = courseName;
  }
  string gradeBook::getCourseName()
  {
    return courseName;
  }
  void gradeBook::displayMessage()
  {
    cout << "Welcome to the gradeBook for " << getCourseName() << " !\n";
  }
}
