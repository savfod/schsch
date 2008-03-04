// Table.cpp: implementation of the Table class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "SchSch.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction/Functions
//////////////////////////////////////////////////////////////////////

#include "Table.h"
#include<list>
#include<vector>

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
	vector< vector< SimpleBox* > > TeachersLessons(HowManyTeachers, vector< SimpleBox* >(0) );
	vector< vector< SimpleBox* > > ClassroomLessons(HowManyClassrooms,vector< SimpleBox* >(0) );
	vector< vector< vector < BigBox> > > TheTable (NumberOfDays,vector< vector< BigBox > >(NumberOfLessons,vector< BigBox >(NumberOfClasses,vector< SimpleBox >(1))));
};

//*********************************************************************


vector<int> Table::BusyTeachers(int Day,int Lesson)
{
	vector<int> L(0);

	vector<BigBox>::iterator i;
	vector<SimpleBox>::iterator j;
	for( i = TheTable[Day][Lesson].begin(); i != TheTable[Day][Lesson].end(); i++ )
		for( j = (*i).begin() ; j != (*i).end() ; j++ )
			L.push_back( (*j).TakeMember( 'T' ) );

	return(L);
};

vector<int> Table::BusyClassrooms(int Day,int Lesson)
{
	vector<int> L(0);

	vector<BigBox>::iterator i;
	vector<SimpleBox>::iterator j;
	for( i = TheTable[Day][Lesson].begin(); i != TheTable[Day][Lesson].end(); i++ )
		for( j = (*i).begin() ; j != (*i).end() ; j++ )
			L.push_back( (*j).TakeMember( 'R' ) );

	return(L);
};


//*********************************************************************

void Table::Add( char Type )
{
	switch( Type )
	{
	case 'T':
			{
				NumberOfTeachers++;
				break;
			};
	case 'R':
			{
				NumberOfClassrooms++;
				break;
			};
	case 'C':
			{
				NumberOfClasses++;
				break;
			};
	case 'S':
			{
				NumberOfSubjects++;
				break;
			};
	};
};

void Table::Delete( char Type, int WhatToDelete )
{
	switch( Type )
	{
	case 'T':
			{
				NumberOfTeachers--;
				for ( int Day = 0; Day != NumberOfDays; Day++ )
					for ( int Lesson = 0; Lesson != NumberOfDays; Lesson++ )
						for( vector< BigBox >::iterator i= TheTable[Day][Lesson].begin(); i != TheTable[Day][Lesson].end(); i++ )
							for( vector< SimpleBox >::iterator j = (*i).begin() ; j != (*i).end() ; j++ )
								if( (*j).TakeMember( 'T' ) >= WhatToDelete )
									(*j).WriteMember( 'T', (*j).TakeMember( 'T' ) - 1 );
				break;
			};
	case 'R':
			{
				NumberOfClassrooms--;
				for ( int Day = 0; Day != NumberOfDays; Day++ )
					for ( int Lesson = 0; Lesson != NumberOfDays; Lesson++ )
						for( vector< BigBox >::iterator i= TheTable[Day][Lesson].begin(); i != TheTable[Day][Lesson].end(); i++ )
							for( vector< SimpleBox >::iterator j = (*i).begin() ; j != (*i).end() ; j++ )
								if( (*j).TakeMember( 'R' ) > WhatToDelete )
									(*j).WriteMember( 'R', (*j).TakeMember( 'R' ) - 1 );
				break;
			};
	case 'C':
			{
				NumberOfClasses--;
				for ( int Day = 0; Day != NumberOfDays; Day++ )
					for ( int Lesson = 0; Lesson != NumberOfDays; Lesson++ )
						for( vector< BigBox >::iterator i= TheTable[Day][Lesson].begin(); i != TheTable[Day][Lesson].end(); i++ )
							for( vector< SimpleBox >::iterator j = (*i).begin() ; j != (*i).end() ; j++ )
								if( (*j).TakeMember( 'C' ) > WhatToDelete )
									(*j).WriteMember( 'C', (*j).TakeMember( 'C' ) - 1 );
				break;
			};
	case 'S':
			{
				NumberOfSubjects--;
				for ( int Day = 0; Day != NumberOfDays; Day++ )
					for ( int Lesson = 0; Lesson != NumberOfDays; Lesson++ )
						for( vector< BigBox >::iterator i= TheTable[Day][Lesson].begin(); i != TheTable[Day][Lesson].end(); i++ )
							for( vector< SimpleBox >::iterator j = (*i).begin() ; j != (*i).end() ; j++ )
								if( (*j).TakeMember( 'S' ) > WhatToDelete )
									(*j).WriteMember( 'S', (*j).TakeMember( 'S' ) + 1 );
				break;
			};
	};
};
//*********************************************************************

void Table::AddGroup( int Day, int Lesson )
{
	(TheTable[Day][Lesson]).push_back( vector<SimpleBox>(0) );
};

void Table::DeleteGroup( int Day, int Lesson, int NumberOfGroup )
{
	(TheTable[Day][Lesson]).erase(TheTable[Day][Lesson].begin()+NumberOfGroup*sizeof(int));
};

//*********************************************************************

bool Table::WriteTo( char Type, int Day, int Lesson, int Class, int Group, int WhatToWrite )
{
	switch( Type )
	{
		case 'T':
			{
				if( ( WhatToWrite >= NumberOfTeachers-1 ) || ( Day >= NumberOfDays-1 ) || ( Class >= NumberOfClasses-1 ) )
				{
					return false;
					break;
				}
				else
					if ( ( (int) ( TheTable[Day][Lesson][Class]).size() ) <= Group )
					{
							return false;
							break;
					}
					else
					{
						(TheTable[Day][Lesson][Class][Group]).WriteMember( 'T', WhatToWrite );
						return true;
						for( vector< SimpleBox* >::iterator i = (TeachersLessons[ WhatToWrite ]).begin(); i <= (TeachersLessons[ WhatToWrite ]).end(); i++)
						{
							if( i == (TeachersLessons[ WhatToWrite ]).end() )
							{
								(TeachersLessons[ WhatToWrite ]).push_back( &TheTable[Day][Lesson][Class][Group] );
							}
							else
							{
								int D = (*(*i)).TakeMember( 'D' );
								int L = (*(*i)).TakeMember( 'L' );
								if ( Time( D, L ) < Time( Day, Lesson ) )
								{
									(TeachersLessons[ WhatToWrite ]).insert( (i+1), &TheTable[Day][Lesson][Class][Group] );
									break;
								};
							};
						};
					};
				break;

			};

		case 'R':
			{
				if( ( WhatToWrite >= NumberOfClassrooms-1 ) || ( Day >= NumberOfDays-1 ) || ( Class >= NumberOfClasses-1 ) )
				{
					return false;
					break;
				}
				else
					if ( ( (int) ( TheTable[Day][Lesson][Class]).size() ) <= Group )
					{
							return false;
							break;
					}
					else
					{
						(TheTable[Day][Lesson][Class][Group]).WriteMember( 'R', WhatToWrite );
						return true;
						for( vector< SimpleBox* >::iterator i = (ClassroomLessons[ WhatToWrite ]).begin(); i <= (ClassroomLessons[ WhatToWrite ]).end(); i++)
						{
							if( i == (ClassroomLessons[ WhatToWrite ]).end() )
							{
								(ClassroomLessons[ WhatToWrite ]).push_back( &TheTable[Day][Lesson][Class][Group] );
							}
							else
							{
								int D = (*(*i)).TakeMember( 'D' );
								int L = (*(*i)).TakeMember( 'L' );
								if ( Time( D, L ) < Time( Day, Lesson ) )
								{
									(ClassroomLessons[ WhatToWrite ]).insert( (i+1), &TheTable[Day][Lesson][Class][Group] );
									break;
								};
							};
						};
					};
				break;

			};

		case 'S':
			{
				if( ( WhatToWrite >= NumberOfClassrooms-1 ) || ( Day >= NumberOfDays-1 ) || ( Class >= NumberOfClasses-1 ) )
				{
					return false;
					break;
				}
				else
					if ( (int) ( (TheTable[Day][Lesson][Class]).size() ) <= Group )
					{
							return false;
							break;
					}
					else
					{
						return true;
						(TheTable[Day][Lesson][Class][Group]).WriteMember( 'S', WhatToWrite ) ;
						break;
					};
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


//*********************************************************************

Table::~Table(void)
{
};

