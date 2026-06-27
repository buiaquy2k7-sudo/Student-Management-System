#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <iostream>
#include <string>
using namespace std;

class Schedule {
private:
    string courseId, dayOfWeek, time;
public:
    Schedule(string courseId="", string dayOfWeek="", string time="");
    void display();
};
#endif
