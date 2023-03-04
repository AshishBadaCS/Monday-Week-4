#include "student.h"
#include <iostream>
#include <string>

using namespace std;

void Student::showScores() {
  cout << "Scores for student " << studentID << ": " << firstName << " "
       << lastName << " are " << endl;
  int sum = 0;
  for (int i = 0; i < NBR_SCORES; i++) {
    cout << scores[i] << " ";
    sum += scores[i];
  }
  cout << "\nThe average is: " << (int)sum / NBR_SCORES << endl;

}
void Student::updateName() {
  string fName, lName;
  cout << "Enter first name for student " << studentID << ": ";
  cin >> fName;
  cout << "Enter last name for student " << studentID << ": ";
  cin >> lName;
  setName(fName, lName);
}
void Student::setScores() {
  for (int i = 0; i < NBR_SCORES; i++) {
    cout << "Enter score " << i + 1 << " for student " << studentID << ": " << firstName << " "
         << lastName << endl;
    cin >> scores[i];
  }
}
Student::Student(string firstName, string lastName) {
  studentID = ++ID;
  setName(firstName, lastName);
}
void Student::setName(string firstName, string lastName) {
  this->firstName = firstName;
  this->lastName = lastName;
}
int Student::ID = 100;

