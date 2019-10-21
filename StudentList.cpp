#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct Student {
  char firstName[100];
  char lastName[100];
  int ID;
  double GPA;
};

void deleteName(vector<Student*>* StudentList);
void printNames(vector<Student*> StudentList);

Student* addName() {
Student* createStudent = new Student();
    
    cout << "\nEnter Student Firstname:";
    cin >> createStudent -> firstName;
    cin.clear();
    cin.ignore(999, '\n');
    cout << "\nEnter Student Lastname:";
    cin >> createStudent -> lastName;
    cin.clear();
    cin.ignore(999, '\n');
    cout << "\n Enter Student ID #:";
    cin >> createStudent -> ID;
    cin.clear();
    cin.ignore(999, '\n');
    cout << "\n Enter Student GPA:";
    cin >> createStudent -> GPA;
    cin.clear();
    cin.ignore(999, '\n');
    return createStudent;
}

int main() {
  char input[10];
  bool onQuit = false; 
  vector<Student*> StudentList;
  while (onQuit == false) {
  cout << "Welcome to Student List, ADD, PRINT, DELETE, QUIT\n";
  cin.getline (input, 10); 
  if (strcmp(input, "QUIT") == 0) {
    exit(0);
  }
  else if (strcmp(input, "ADD") == 0) {
    StudentList.push_back(addName()); 
    cout << "Done \n";
  }
  else if (strcmp(input, "PRINT") == 0) {
    printNames(StudentList);
  }
  else if (strcmp(input, "DELETE") == 0) {
    deleteName(&StudentList);
    cin.clear();
    cin.ignore(999, '\n');
  }
  else 
   {
    cout << "\nPlease Enter a Valid Command, ADD, DELETE, PRINT, QUIT";
  }

  }  
  return 0;
}

void printNames(vector<Student*> StudentList) {
  if (StudentList.empty() == true) {
    cout << "Student List is Empty, Nothing to Print! \n";
  }
  else {
  for (vector<Student*>:: iterator printAll = StudentList.begin(); printAll != StudentList.end(); ++printAll) {
    cout << (*printAll) -> firstName << " ";
    cout << (*printAll) -> lastName << ", ";
    cout << (*printAll) -> ID << ", ";
    cout << setprecision(3) << (*printAll) -> GPA << "\n"; 
   }
}
}
void deleteName(vector<Student*>* StudentList) {
  int StudentIDinput; 
  cout << "Which Student do you want to delete? \n";
  cin >> StudentIDinput;
  if (StudentList -> empty() == true) {
      cout << "Student List is Empty, Nothing to Delete! \n";
      return;
  }
  else {
    for (vector<Student*>:: iterator find = StudentList -> begin(); find != StudentList -> end(); find++) {
      if ((*find) -> ID == StudentIDinput) {
	StudentList -> erase(find);
	cout << "Student Deleted \n";
	delete *find;
	return;
    }
      else {
	cout << "No Student on This List with the Student ID Given. \n"; 
    }
  }
  }
} 
