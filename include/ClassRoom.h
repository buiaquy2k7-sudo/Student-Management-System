#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>
#include <string>
using namespace std;

class ClassRoom {
private:
    string classId, className;
public:
    ClassRoom(string classId="", string className="");
    void display();
};
#endif
