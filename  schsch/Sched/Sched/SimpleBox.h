#pragma once
#include<string>

using namespace std;

extern class SimpleBox;

struct TeacherWithPointer
{
	int TeacherIndex;
	SimpleBox* pointer;
};

struct ClassroomWithPointer
{
	int ClassroomIndex;
	SimpleBox* pointer;
};

class SimpleBox
{
private:
	TeacherWithPointer Teacher;
	ClassroomWithPointer Classroom;
	int SubjectIndex;
	int Day,lesson¹;
	int ClassIndex;
public:
	SimpleBox(void);

	SimpleBox operator=(SimpleBox Box);

	int* TakeMember( char Type );          //required types: 'T','R','S','D','L'
	SimpleBox** TakePointer( char Type );  //required types: 't','r'

	~SimpleBox(void);
};
