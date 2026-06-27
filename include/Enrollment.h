#ifndef ENROLLMENT_H
#define ENROLLMENT_H
#include "Score.h"
#include <iostream>
#include <string>
using namespace std;

class Enrollment {
private:
    string studentId, courseId;
    Score score;
public:
    Enrollment(string studentId="", string courseId="", Score score=Score());
    void display();
};
#endif
