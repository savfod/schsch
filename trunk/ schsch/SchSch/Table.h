// Table.h: interface for the Table class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TABLE_H__E6CC503D_886F_4B93_BBD7_829D7514B849__INCLUDED_)
#define AFX_TABLE_H__E6CC503D_886F_4B93_BBD7_829D7514B849__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#pragma once
#include "SimpleBox.h"
#include<list>
#include<vector>

using namespace std;

class Table
{
private:
	int NumberOfDays, NumberOfLessons, NumberOfTeachers, NumberOfSubjects, NumberOfClassrooms, NumberOfClasses;
	vector< vector< SimpleBox* > > TeachersLessons;
	vector< vector< SimpleBox* > > ClassroomLessons;
	vector< vector< vector< BigBox > > > TheTable;
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

	//*********************************************

	~Table(void);
};

#endif // !defined(AFX_TABLE_H__E6CC503D_886F_4B93_BBD7_829D7514B849__INCLUDED_)
