#include "../include/ClassRoom.h"
ClassRoom::ClassRoom(string classId, string className){ this->classId=classId; this->className=className; }
void ClassRoom::display(){ cout << classId << " - " << className << endl; }
