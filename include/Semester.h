#ifndef SEMESTER_H
#define SEMESTER_H
#include <iostream>
#include <string>
using namespace std;

class Semester {
private:
    string semesterId, schoolYear;
public:
    Semester(string semesterId="", string schoolYear="");
    void display();
};
#endif
