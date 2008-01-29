#pragma once
#include "BigBox.h"
#include<list>

using namespace std;

class Table
{
private:
	int NumberOfDays,NumberOfLessons,NumberOfTeachers,NumberOfSubjects,NumberOfClassrooms,NumberOfClasses;
	vector<SimpleBox*> TeachersFirstLesson;
	vector<SimpleBox*> ClassroomFirstLesson;
	vector<vector<vector<BigBox>>> TheTable;
public:
	Table(void);
	Table(int HowManyDays,int HowManyLessons,int HowManyTeachers,int HowManySubjects,int HowManyClassrooms,int HowManyClasses);

	//*********************************************

	list<int> FreeTeachers(int Day,int Lesson);
	list<int> FreeClassrooms(int Day,int Lesson);

	//*********************************************

	void Add( char Type, int WhatToAdd );
	void Delete( char Type, int WhatToDelete );

	//*********************************************

	bool WriteTo( char Type, int Day, int Lesson, int Class, int WhatToWrite );
	bool WriteTo( char Type, int Day, int Lesson, int Class, int Group, int WhatToWrite );

	//*********************************************

	int Time( int Day, int Lesson );
	int DayUntime( int Time );
	int LessonUntime( int Time );

	//*********************************************

	~Table(void);
};


