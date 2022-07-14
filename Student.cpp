#include "Student.h"
#include <iostream>

using namespace std;

void Student::assignDetails(int pstudentID, const char *pname)
{
  StudentID = pstudentID;
  name = pname;
}

void Student::display(){
  cout << "Student ID: " << StudentID << endl;
  cout << "Name : " << name << endl;

}