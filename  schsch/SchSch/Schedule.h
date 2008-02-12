// Schedule.h: interface for the Schedule class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCHEDULE_H__FCE9707F_D744_44F1_A2F0_A3F5543FF198__INCLUDED_)
#define AFX_SCHEDULE_H__FCE9707F_D744_44F1_A2F0_A3F5543FF198__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#pragma once
#include "Teacher.h"
#include "Table.h"
#include <vector>
#include <map>
#include <list>
#include <string>

using namespace std;

class Schedule
{
private:
	int NumberOfDays,NumberOfLessons;
	vector<string> ListOfSubjects;
	vector<string> ListOfClasses;
	vector<Teacher> ListOfTeachers;
	vector<string> ListOfClassrooms;
	Table TheTable;

public:
	Schedule();
	Schedule(int HowManyDays,int HowManyLessons,vector<string> Classes,vector<Teacher> Teachers,vector<string> Classrooms);

	//*********************************************

	list<Teacher> FreeTeachers( int Day, int Lesson );
	list<string> FreeClassrooms( int Day, int Lesson );

	//*********************************************

	int Translate ( char Type, string WhatToTranslate );
	int Translate ( Teacher T );
	Teacher T_Translate ( int WhatToTranslate );
	string S_Translate ( char Type, int WhatToTranslate );

	//*********************************************

	void Add( char Type, string WhatToAdd );
	void Delete( char Type, string WhatToDelete );
	void AddTeacher( char Type, Teacher WhatToAdd );
	void DeleteTeacher( char Type, Teacher WhatToDelete );

	//*********************************************

	bool WriteTo( char Type, int Day, int Lesson, string Class, string WhatToWrite );
	bool WriteTo( char Type, int Day,int Lesson, string Class, int Group, string WhatToWrite );
	void WriteTo( char Type, int Day, int Lesson, string Class, Teacher WhatToWrite );
	void WriteTo( char Type, int Day,int Lesson, string Class, int Group, Teacher WhatToWrite );

	//*********************************************

	~Schedule(void);
};

#endif // !defined(AFX_SCHEDULE_H__FCE9707F_D744_44F1_A2F0_A3F5543FF198__INCLUDED_)
