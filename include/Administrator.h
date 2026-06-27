#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "Person.h"
#include <iostream>
using namespace std;

class Administrator : public Person {
private:
    string username;
public:
    Administrator(string id="", string name="", string gender="", string username="");
    void displayInfo() override;
};
#endif
