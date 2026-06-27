#include "../include/Department.h"
Department::Department(string departmentId, string departmentName){ this->departmentId=departmentId; this->departmentName=departmentName; }
void Department::display(){ cout << departmentId << " - " << departmentName << endl; }
