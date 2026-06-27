#ifndef LECTURER_H
#define LECTURER_H
#include "Person.h"
#include <iostream>
using namespace std;

class Lecturer : public Person {
private:
    string department;
public:
    Lecturer(string id="", string name="", string gender="", string department="");
    string getDepartment() const;
    void displayInfo() override;
};
#endif
