
#include <string>
using std::string;

class gradeBook
{
public:
  gradeBook(string);
  void setCourseName(string);
  string getCourseName();
  void displayMessage();
private:
  string courseName;
};
