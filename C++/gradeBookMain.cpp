#include <iostream>
using std::cout;

#include "gradeBook.h"

int main()
{
  gradeBook grade1("CIC");
  gradeBook grade2("ECP");

  cout << "Grade1: " << grade1.getCourseName() << "\nGrade2: " << grade2.getCourseName() << "\n";

  return 0;
}
