#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>

using namespace std;

struct students {
  double GPA;
  int iD;
};

void printNames(students);
void addName(students);
void deleteName(students);


int main() {
  char input[10];
  bool onQuit = false; 
  vector<students*> StudentList;
  while (onQuit == false) {
  cout << "Welcome to Student List, ADD, PRINT, DELETE, QUIT\n";
  cin.getline (input, 10); 
  if (strcmp(input, "QUIT") == 0) {
    onQuit = true;
  }
  else if (strcmp(input, "ADD") == 0) {
    // addName(StudentList*);
    cout << "\ntest";
  }
  else if (strcmp(input, "PRINT") == 0) {
    // printNames(StudentList*);
    cout << "\ntest";
  }
  else if (strcmp(input, "DELETE") == 0) {
    cout << "\ntest";
    // deleteName(StudentList*);
  }
  else {
    cout << "\nPlease Enter a Valid Command, ADD, DELETE, PRINT, QUIT";
  }

  }  
  return 0;
}

void printNames(students) {

}
void addName(students) {

}
void deleteName(students) {

} 
