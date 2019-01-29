#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "gradeBook.h"

int main()
{
  gradeBook grade1("CIC");
  gradeBook grade2("ECP");

  cout << "Grade1 created for course: " << grade1.getCourseName() << "\nGrade2 created for course: " << grade2.getCourseName() << endl;

  return 0;
}
