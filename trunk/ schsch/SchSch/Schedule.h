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
	unsigned int NumberOfDays,NumberOfLessons;
	unsigned int Subjects;
	unsigned int Classes;
	unsigned int Teachers;
	unsigned int Classrooms;
	map<string,int> ListOfSubjects;
	map<string,int> ListOfClasses;
	map<Teacher,int> ListOfTeachers;
	map<string,int> ListOfClassrooms;
	Table TheTable;

public:
	Schedule();
	Schedule(int HowManyDays,int HowManyLessons,vector<string> Classes,vector<Teacher> Teachers,vector<string> Classrooms);

	//*********************************************

	void Save( char* Filename ); //Saves Schedule(not written)
	bool Load( char* Filename ); //Loads Schedule(not written)

	//*********************************************

	vector<Teacher> T_FreeTeachers( int Day, int Lesson );                   //Returns list of free teachers(not written)
	vector<Teacher> T_FreeTeachers( int Day, int Lesson, string Subject );   //Returns list of free teachers, who teaches this subject(not written)
	vector<string> FreeTeachers( int Day, int Lesson );                      //Returns list of free teachers(not written)
	vector<string> FreeTeachers( int Day, int Lesson, string Subject );      //Returns list of free teachers, who teaches this subject(not written)
	vector<string> FreeClassrooms( int Day, int Lesson );                    //Returns list of free classrooms(not written)

	//*********************************************

	int Translate ( char Type, string WhatToTranslate );    //converts from string with name of object to its index
	int Translate ( Teacher WhatToTranslate );              //converts from Teacher to its index
	Teacher T_Translate ( int WhatToTranslate );            //converts to Teacher from its index
	string S_Translate ( char Type, int WhatToTranslate );  //converts to string with name from its index

	//*********************************************

	void Add( char Type, string WhatToAdd );												//adds Class,Subject or Classroom
	void Delete( char Type, string WhatToDelete );											//deletes Class,Subject, Classroom or Teacher
	void AddTeacher( Teacher WhatToAdd );													//adds Teacher
	void DeleteTeacher( Teacher WhatToDelete );												//deletes Teacher
	void AddTeacher( string Name, string Patronymic, string Initials, string Surname );     //adds Teacher with empty list of subjects

	//*********************************************

	void AddGroup( int Day, int Lesson );                       //Adds Group (not written)
	void DeleteGroup( int Day, int Lesson, int NumberOfGroup ); //Deletes Group (not written)

	//*********************************************

	bool WriteTo( char Type, int Day, int Lesson, string Class, string WhatToWrite );              //Writes smth to a schedule box(writes to the first group). 
	bool WriteTo( char Type, int Day,int Lesson, string Class, int Group, string WhatToWrite );    //Writes smth to a schedule box
//	bool T_WriteTo( char Type, int Day,int Lesson, string Class, string WhatToWrite );             //Writes Teacher (not written)
//	bool T_WriteTo( char Type, int Day,int Lesson, string Class, int Group, string WhatToWrite );  //Writes Teacher (not written)

	//*********************************************

	~Schedule(void);
};

#endif // !defined(AFX_SCHEDULE_H__FCE9707F_D744_44F1_A2F0_A3F5543FF198__INCLUDED_)
