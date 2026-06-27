#ifndef COURSE_H
#define COURSE_H
#include "Subject.h"
#include "Lecturer.h"
#include <iostream>
using namespace std;

class Course {
private:
    string courseId;
    Subject subject;
    Lecturer lecturer;
public:
    Course(string courseId="", Subject subject=Subject(), Lecturer lecturer=Lecturer());
    string getCourseId() const;
    void display();
};
#endif
