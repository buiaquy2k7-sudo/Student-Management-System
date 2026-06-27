#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {
protected:
    string id, name, gender;
public:
    Person(string id="", string name="", string gender="");
    virtual void displayInfo() = 0;
    string getId() const;
    string getName() const;
    string getGender() const;
    void setName(string name);
    void setGender(string gender);
    virtual ~Person();
};
#endif
