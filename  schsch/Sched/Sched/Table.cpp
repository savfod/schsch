#include "Table.h"
#include<list>

Table::Table(void)
{
};

Table::Table(int HowManyDays,int HowManyLessons,int HowManyTeachers,int HowManySubjects,int HowManyClassrooms,int HowManyClasses)
{
	NumberOfDays = HowManyDays;
	NumberOfLessons = HowManyLessons;
	NumberOfTeachers = HowManyTeachers;
	NumberOfSubjects = HowManySubjects;
	NumberOfClassrooms = HowManyClassrooms;
	NumberOfClasses = HowManyClasses;
	vector<SimpleBox*> TeachersFirstLesson(HowManyTeachers,0);
	vector<SimpleBox*> ClassroomFirstLesson(HowManyClassrooms,0);
	vector<vector<vector<BigBox>>> TheTable (NumberOfDays,vector<vector<BigBox>>(NumberOfLessons,vector<BigBox>(NumberOfClasses)));
};

//*********************************************************************


list<int> Table::FreeTeachers(int Day,int Lesson)
{
	list<int> L(0);
	for(int i=NumberOfTeachers;i-1;i++)
		L.push_back(i);

	for(int i=NumberOfClasses-1;i;i--)
		for(int j = (TheTable[Day][Lesson][i].groups() ) -1 ; j ; j-- )
			L.remove( *TheTable[Day][Lesson][i][j].TakeMember( 'T' ) );

	return(L);
};

list<int> Table::FreeClassrooms(int Day,int Lesson)
{
	list<int> L(0);
	for(int i=NumberOfClassrooms;i-1;i++)
		L.push_back(i);

	for(int i=NumberOfClasses;i-1;i--)
		for(int j = (TheTable[Day][Lesson][i].groups() ) -1 ; j ; j-- )
			L.remove( *TheTable[Day][Lesson][i][j].TakeMember( 'R' ) );

	return(L);
};


//*********************************************************************

void Table::Add( char Type, int WhatToAdd )
{
};

void Table::Delete( char Type, int WhatToDelete )
{
};

//*********************************************************************

bool Table::WriteTo( char Type, int Day, int Lesson, int Class, int Group, int WhatToWrite )
{
	switch( Type )
	{
		case 'T':
			{
				if( WhatToWrite >= NumberOfTeachers ) 
				{
					return false;
					break;
				};

				*TheTable[Day][Lesson][Class][Group].TakeMember( 'T' ) = WhatToWrite;

				if( TeachersFirstLesson[WhatToWrite] == 0 )
				{
					TeachersFirstLesson[WhatToWrite] = &(TheTable[Day][Lesson][Class][Group]);
					return true;
					break;
				};

				if( *TheTable[Day][Lesson][Class][Group].TakeMember( 'T' ) == WhatToWrite )
				{
					return true;
					break;
				};

				int D = *( *(TeachersFirstLesson[WhatToWrite] ) ).TakeMember( 'D' );
				int L = *( *(TeachersFirstLesson[WhatToWrite] ) ).TakeMember( 'L' );
				if( Time( Day, Lesson ) < Time( D, L ) ) 
				{ 
					*TheTable[Day][Lesson][Class][Group].TakePointer( 't' ) = TeachersFirstLesson[WhatToWrite];
					TeachersFirstLesson[WhatToWrite] = &TheTable[Day][Lesson][Class][Group]; 
					return true;
					break;
				};
		
				SimpleBox* p = TeachersFirstLesson[WhatToWrite];
				for( ; *(*p).TakePointer( 't' ) != 0; p = *(*(TeachersFirstLesson[WhatToWrite])).TakePointer( 't' ) )
				{
					int D = *( *p ).TakeMember( 'D' );
					int L = *( *p ).TakeMember( 'L' );
					if( Time( Day, Lesson ) < Time( D, L ) ) 
					{ 
						*TheTable[Day][Lesson][Class][Group].TakePointer( 't' ) = p;
						*(*p).TakePointer( 't' ) = &TheTable[Day][Lesson][Class][Group]; 
						return true;
						break;
					};
				};	
	
				if(*(*p).TakePointer( 't' ) != 0)
				{
					return true;
					break;
				};
	
				*(*p).TakePointer( 't' ) = &TheTable[Day][Lesson][Class][Group];
				return true;
				break;
			};

		case 'R':
			{
				if( WhatToWrite >= NumberOfTeachers ) 
				{
					return false;
					break;
				};
	
				*TheTable[Day][Lesson][Class][Group].TakeMember( 'R' ) = WhatToWrite;

				if( TeachersFirstLesson[WhatToWrite] == 0 )
				{
					TeachersFirstLesson[WhatToWrite] = &(TheTable[Day][Lesson][Class][Group]);
					return true;
					break;
				};

				if( *TheTable[Day][Lesson][Class][Group].TakeMember( 'R' ) == WhatToWrite )
				{
					return true;
					break;
				};

				int D = *( *(TeachersFirstLesson[WhatToWrite] ) ).TakeMember( 'D' );
				int L = *( *(TeachersFirstLesson[WhatToWrite] ) ).TakeMember( 'L' );
				if( Time( Day, Lesson ) < Time( D, L ) ) 
				{ 
					*TheTable[Day][Lesson][Class][Group].TakePointer( 'r' ) = TeachersFirstLesson[WhatToWrite];
					TeachersFirstLesson[WhatToWrite] = &TheTable[Day][Lesson][Class][Group]; 
					return true;
					break;
				};
		
				SimpleBox* p = TeachersFirstLesson[WhatToWrite];
				for( ; *(*p).TakePointer( 'r' ) != 0; p = *(*(TeachersFirstLesson[WhatToWrite])).TakePointer( 'r' ) )
				{
					int D = *( *p ).TakeMember( 'D' );
					int L = *( *p ).TakeMember( 'L' );
					if( Time( Day, Lesson ) < Time( D, L ) ) 
					{ 
						*TheTable[Day][Lesson][Class][Group].TakePointer( 'r' ) = p;
						*(*p).TakePointer( 'r' ) = &TheTable[Day][Lesson][Class][Group]; 
						return true;
						break;
					};
				};	

				if(*(*p).TakePointer( 'r' ) != 0)
				{
					return true;
					break;
				};
	
				*(*p).TakePointer( 'r' ) = &TheTable[Day][Lesson][Class][Group];
				return true;
				break;
			};

		case 'S':
			{
				return true;
				*TheTable[Day][Lesson][Class][Group].TakeMember( 'S' ) = WhatToWrite;
				break;
			};

		default:
			{
				return false;
				break;
			};
	};
};

bool Table::WriteTo( char Type, int Day, int Lesson, int Class, int WhatToWrite )
{
	bool b = WriteTo( Type, Day, Lesson, Class, 0, WhatToWrite );
	return b;
};

//*********************************************************************

int Table::Time( int Day, int Lesson )
{
	return( Day * NumberOfLessons + Lesson );
};

int Table::DayUntime( int Time )
{
	return( Time / NumberOfLessons );
};

int Table::LessonUntime( int Time )
{
	return( Time % NumberOfLessons );
};

//*********************************************************************

Table::~Table(void)
{
};
