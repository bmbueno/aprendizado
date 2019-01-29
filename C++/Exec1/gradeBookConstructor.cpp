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

int main()
{
  gradeBook grade1("CIC");
  gradeBook grade2("ECP");

  cout << "Grade1 created for course: " << grade1.getCourseName() << "\nGrade2 created for course: " << grade2.getCourseName() << endl;

  return 0;
}
