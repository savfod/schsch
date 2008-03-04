// Teacher.cpp: implementation of the Teacher class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "SchSch.h"


//////////////////////////////////////////////////////////////////////
// Construction/Destruction/Functions
//////////////////////////////////////////////////////////////////////

#include "Teacher.h"
#include<string>

Teacher::Teacher(void)
{
};

Teacher::Teacher( string Name, string Patronymic, string Initials, string Surname )
{
	vector<int> Subjects(0);
	string name=Name;
	string patronymic=Patronymic;
	string initials=Initials;
	string surname=Surname;
};


bool operator== ( Teacher T1, Teacher T2 )
{
	bool b;
	b = ( T1.name == T2.name ) && ( T1.patronymic == T2.patronymic ) && ( T1.surname == T2.surname );
	return (b);
};

void Teacher::AddSubject( int WhatToAdd )
{
	Subjects.push_back( WhatToAdd );
};

bool operator< ( Teacher T1, Teacher T2 )
{
	if( T1 == T2 )
		return false;
	else
		if ( T1.surname < T2.surname )
			return true;
		else
			if( T1.surname == T2.surname )
				return ( ( T1.initials < T2.initials )?true:false);
			else
				return false;
};

string Name( Teacher T )
{
	return( T.surname + " " + T.initials );
};


Teacher::~Teacher(void)
{
};

