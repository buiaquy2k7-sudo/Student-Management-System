#include "../include/Student.h"
Student::Student(string id, string name, string gender, string classId, float gpa) : Person(id,name,gender){
    this->classId=classId; setGPA(gpa);
}
void Student::setGPA(float gpa){ this->gpa = (gpa>=0 && gpa<=10) ? gpa : 0; }
float Student::getGPA() const { return gpa; }
string Student::getClassId() const { return classId; }
void Student::setClassId(string classId){ this->classId=classId; }
void Student::displayInfo(){
    cout << left << setw(10) << id << setw(25) << name << setw(10) << gender
         << setw(10) << classId << setw(8) << fixed << setprecision(2) << gpa << endl;
}
