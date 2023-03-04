#include <iostream>
using namespace std;

class Student {
public:
  static const int NBR_SCORES = 4;
  void setName(string firstName, string lastName);
  void updateName();
  void setScores();
  void showScores();
  Student(string firstName = "", string lastName = "");

private:
  string firstName;
  string lastName;
  int scores[NBR_SCORES];
  int studentID;
  static int ID;
};
