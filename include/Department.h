#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include <string>
using namespace std;

class Department {
private:
    string departmentId, departmentName;
public:
    Department(string departmentId="", string departmentName="");
    void display();
};
#endif
