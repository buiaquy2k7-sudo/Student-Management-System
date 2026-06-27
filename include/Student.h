#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>
#include <iomanip>
using namespace std;

class Student : public Person {
private:
    string classId;
    float gpa;
public:
    Student(string id="", string name="", string gender="", string classId="", float gpa=0);
    void setGPA(float gpa);
    float getGPA() const;
    string getClassId() const;
    void setClassId(string classId);
    void displayInfo() override;
};
#endif
