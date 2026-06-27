#ifndef REPORTMANAGER_H
#define REPORTMANAGER_H
#include "Student.h"
#include "Lecturer.h"
#include "Administrator.h"
#include <vector>
#include <iostream>
using namespace std;

class ReportManager {
public:
    void reportGoodStudents(const vector<Student>& students);
    void showOOPDemo();
};
#endif
