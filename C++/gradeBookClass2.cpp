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
  void setCourseName(string courseName)
  {
    this->courseName = courseName;
  }
  string getCourseName()
  {
    return courseName;
  }
  void displayMessage()
  {
    cout << "Welcome to the gradeBook for " << courseName << " !" << endl;
  }
private:
  string courseName;
};

int main()
{
  string courseName;
  gradeBook myGrade;

  //cout << "Initial course name is: " << myGrade.getCourseName() << endl;

  cout << "Please enter the course name: ";
  getline(cin, courseName);
  myGrade.setCourseName(courseName);

  myGrade.displayMessage();


  return 0;
}
