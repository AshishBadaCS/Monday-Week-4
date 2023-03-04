#include "student.h"
#include <iostream>
#include <string>

using namespace std;

class Student1 {
private:
  static int ID;
  int studentID;
  string firstName;
  string lastName;
  int scores[Student::NBR_SCORES];

public:
  Student1() {
    ID++;
    studentID = ID;
    setName();
  }
  void setName() {
    cout << "Enter first name for student " << studentID << ": ";
    cin >> firstName;
    cout << "Enter last name for student " << studentID << ": ";
    cin >> lastName;
  }
  void updateName() {
    string fName, lName;
    cout << "Enter first name for student " << studentID << ": ";
    cin >> fName;
    cout << "Enter last name for student " << studentID << ": ";
    cin >> lName;
    setName(fName, lName);
  }
  void setName(string fName, string lName) {
    firstName = fName;
    lastName = lName;
  }
  void setScores() {
    for (int i = 0; i < Student::NBR_SCORES; i++) {
      cout << "Enter score " << i + 1 << " for student " << studentID << ": ";
      cin >> scores[i];
    }
  }
  void showScores() {
    cout << "Scores for student " << studentID << ": " << firstName << " "
         << lastName << " are ";
    int sum = 0;
    for (int i = 0; i < Student::NBR_SCORES; i++) {
      cout << scores[i] << " ";
      sum += scores[i];
    }
    cout << "\nThe average is: " << (float)sum / Student::NBR_SCORES << endl;
  }
};

int Student::ID = 100;

int main() {
  Student student;
  student.setScores();
  student.showScores();
  return 0;
}
