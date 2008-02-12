// Schedule.cpp: implementation of the Schedule class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "SchSch.h"


//////////////////////////////////////////////////////////////////////
// Construction/Destruction/Functions
//////////////////////////////////////////////////////////////////////

#include "Schedule.h"

using namespace std;

Schedule::Schedule(void)
{
	int NumberOfDays = 0;
	int NumberOfLessons = 0;
	vector<string> ListOfSubjects(0);
	vector<string> ListOfClasses(0);
	vector<Teacher> ListOfTeachers(0);
	vector<string> ListOfClassrooms(0);
	Table TheTable( 0, 0, 0, 0, 0, 0);
};


//*********************************************************************


list<Teacher> Schedule::FreeTeachers( int Day, int Lesson )
{
	list<int> Li;
	list<Teacher> Lt(0);
	Li = TheTable.FreeTeachers( Day, Lesson );
	for( list<int>::iterator i = Li.begin(); i != Li.end(); i++)
		Lt.push_back( T_Translate( *i ));
	return ( Lt );
};

list<string> Schedule::FreeClassrooms( int Day, int Lesson )
{
	list<int> Li;
	list<string> Lc(0);
	Li = TheTable.FreeTeachers( Day, Lesson );
	for( list<int>::iterator i = Li.begin(); i != Li.end(); i++)
		Lc.push_back( S_Translate( 'R', *i ));
	return ( Lc );
};

//*********************************************************************

int Schedule::Translate ( char Type, string WhatToTranslate )
{
	switch( Type )
	{
		case 'R':
			{
				for( unsigned i = 0; i != ( ListOfClassrooms.size() ); i++ )
					if ( ListOfClassrooms[i] == WhatToTranslate )
					{
						return i;
						break;
					};
			};

		case 'S':
			{
				for( unsigned i = 0; i != ListOfSubjects.size(); i++ )
					if ( ListOfSubjects[i] == WhatToTranslate )
					{
						return i;
						break;
					};
			};

		case 'C':
			{
				for( unsigned i = 0; i != ListOfClasses.size(); i++ )
					if ( ListOfClasses[i] == WhatToTranslate )
					{
						return i;
						break;
					};
			};
	};
};

int Schedule::Translate ( Teacher T )
{
	for( unsigned i = 0; i != ListOfTeachers.size(); i++ )
		if ( ListOfTeachers[i] == T )
		{
			return i;
			break;
		};

};

Teacher Schedule::T_Translate ( int WhatToTranslate )
{
	return( ListOfTeachers[WhatToTranslate] );
};

string Schedule::S_Translate ( char Type, int WhatToTranslate )
{
	switch( Type )
	{
		case 'R':
			return( ListOfClassrooms[WhatToTranslate] );
		case 'S':
			return( ListOfSubjects[WhatToTranslate] );
		case 'C':
			return( ListOfClasses[WhatToTranslate] );
	};
};

//*********************************************************************

void Schedule::Add( char Type, string WhatToAdd )
{
};

void Schedule::Delete( char Type, string WhatToDelete )
{
};

void Schedule::AddTeacher( char Type, Teacher WhatToAdd )
{
};

void Schedule::DeleteTeacher( char Type, Teacher WhatToDelete )
{
};

//*********************************************************************

bool Schedule::WriteTo( char Type, int Day, int Lesson, string Class, int Group, string WhatToWrite )
{
	bool b = TheTable.WriteTo( Type, Day, Lesson, Translate( 'C', Class) ,Group, Translate( Type, WhatToWrite ) );
	return b;
};

bool Schedule::WriteTo( char Type, int Day, int Lesson, string Class, string WhatToWrite )
{
	bool b = TheTable.WriteTo( Type, Day, Lesson, Translate( 'C', Class) , Translate( Type, WhatToWrite ) );
	return b;
};

void Schedule::WriteTo( char Type, int Day, int Lesson, string Class, Teacher WhatToWrite )
{
};

void Schedule::WriteTo( char Type, int Day,int Lesson, string Class, int Group, Teacher WhatToWrite )
{
};


//*********************************************************************


Schedule::~Schedule(void)
{
};
