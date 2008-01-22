#pragma once


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
	int LessonIndex;
	int Day,lesson¹;
	int ClassIndex;
public:
	SimpleBox(void);

	~SimpleBox(void);
};
