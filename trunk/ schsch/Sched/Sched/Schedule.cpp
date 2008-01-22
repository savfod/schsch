#include "Schedule.h"
#include<vector>

using namespace std;

Schedule::Schedule(void)
{
};

vector<string> Schedule::FreeTeachers(int Day,int Lesson)
{
	return(vector<string>(0));
};

vector<string> Schedule::FreeClassrooms(int Day,int Lesson)
{
	return(vector<string>(0));
};

void Schedule::WriteTeacherTo(Teacher T,int Day,int Lesson,string Class)
{
};

void Schedule::WriteClassroomTo(string Classroom,int Day,int Lesson,string Class)
{
};

void Schedule::WriteLessonTo(string Subject,int Day,int Lesson,string Class)
{
};

Schedule::~Schedule(void)
{
};
