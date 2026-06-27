#ifndef SUBJECT_H
#define SUBJECT_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Subject {
private:
    string subjectId, subjectName;
    int credit;
public:
    Subject(string subjectId="", string subjectName="", int credit=0);
    string getSubjectId() const;
    string getSubjectName() const;
    int getCredit() const;
    void display();
};
#endif
