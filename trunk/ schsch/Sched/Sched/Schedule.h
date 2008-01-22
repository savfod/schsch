#pragma once
#include "BigBox.h"
#include"teacher.h"
#include<vector>
#include<map>

using namespace std;

class Schedule
{
private:
	int NumberOfDays,NumberOfLessons;
	map<int,string> ListOfSubjects;
	map<int,string> ListOfClasses;
	map<int,Teacher> ListOfTeachers;
	map<int,string> ListOfClassrooms;

public:
	Schedule();
	Schedule(int HowManyDays,int HowManyLessons,vector<string> Classes,vector<Teacher> Teachers,vector<string> Classrooms);

	vector<string> FreeTeachers(int Day,int Lesson);
	vector<string> FreeClassrooms(int Day,int Lesson);

	void WriteTeacherTo(Teacher T,int Day,int Lesson,string Class);
	void WriteClassroomTo(string Classroom,int Day,int Lesson,string Class);
	void WriteLessonTo(string Subject,int Day,int Lesson,string Class);

	~Schedule(void);
};
