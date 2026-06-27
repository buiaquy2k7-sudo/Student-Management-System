#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include "Student.h"
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

class FileManager {
public:
    void saveStudentsToFile(const vector<Student>& students);
};
#endif
