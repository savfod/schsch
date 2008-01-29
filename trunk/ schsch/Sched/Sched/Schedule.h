#pragma once
#include "BigBox.h"
#include"teacher.h"
#include<vector>
#include<map>
#include<list>
#include<string>

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

	//*********************************************

	list<string> FreeTeachers( int Day, int Lesson );
	list<string> FreeClassrooms( int Day, int Lesson );

	//*********************************************

	void Add( char Type, string WhatToAdd );
	void Delete( char Type, string WhatToDelete );
	void AddTeacher( char Type, Teacher WhatToAdd );
	void DeleteTeacher( char Type, Teacher WhatToDelete );

	//*********************************************

	void WriteTo( char Type, int Day, int Lesson, string Class, int WhatToWrite );
	void WriteTo( char Type, int Day,int Lesson, string Class, int group, int WhatToWrite );

	//*********************************************

	~Schedule(void);
};
