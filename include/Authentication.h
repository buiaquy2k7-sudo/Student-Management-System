#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H
#include <iostream>
#include <string>
using namespace std;

class Authentication {
private:
    string username, password;
public:
    Authentication(string username="admin", string password="123");
    bool login();
};
#endif
