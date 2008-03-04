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
	unsigned int NumberOfDays = 0;
	unsigned int NumberOfLessons = 0;
	unsigned int Subjects=0;
	unsigned int Classes=0;
	unsigned int Teachers=0;
	unsigned int Classrooms=0;
	vector<string> ListOfSubjects(0);
	vector<string> ListOfClasses(0);
	vector<Teacher> ListOfTeachers(0);
	vector<string> ListOfClassrooms(0);
	Table TheTable( 0, 0, 0, 0, 0, 0);
};


//*********************************************************************


void Schedule::Save( char* Filename )
{
	//FILE* Stream;
	//Stream = fopen( Filename, "w" );
	//fwrite( NumberOfDays, sizeof(int), 1, Stream );
	//fwrite( NumberOfLessons, sizeof(int), 1, Stream );
	//vector<string>::iterator i;
	//for( i = ListOfSubjects.begin(); i != ListOfSubjects.end(); i++ )
	//{
	//	char* str = c_str( *i );
	//};
};

bool Schedule::Load( char* Filename )
{
	return false;
};


//*********************************************************************

/*list<Teacher> Schedule::FreeTeachers( int Day, int Lesson )
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
*/

//*********************************************************************

int Schedule::Translate ( char Type, string WhatToTranslate )
{
	switch( Type )
	{
		case 'R':
			{
				map<string,int>::iterator i = ListOfClassrooms.find( WhatToTranslate );
				return (*i).second;
				break;
			};

		case 'S':
			{
				map<string,int>::iterator i = ListOfSubjects.find( WhatToTranslate );
				return (*i).second;
				break;
			};

		case 'C':
			{
				map<string,int>::iterator i = ListOfClasses.find( WhatToTranslate );
				return (*i).second;
				break;
			};
		case 'T':
			{
				map<Teacher,int>::iterator i = ListOfTeachers.begin();
				for(;Name((*i).first) != WhatToTranslate ;i++){};
				return( (*i).second );
			};
	};
};

int Schedule::Translate ( Teacher WhatToTranslate )
{
	map<Teacher,int>::iterator i = ListOfTeachers.find( WhatToTranslate );
	return (*i).second;
};

Teacher Schedule::T_Translate ( int WhatToTranslate )
{
	map<Teacher,int>::iterator i = ListOfTeachers.begin();
	for(;(*i).second != WhatToTranslate ;i++){};
	return( (*i).first );
};

string Schedule::S_Translate ( char Type, int WhatToTranslate )
{
	switch( Type )
	{
		case 'R':
			{
					map<string,int>::iterator i = ListOfClassrooms.begin();
					for(;(*i).second != WhatToTranslate ;i++){};
					return( (*i).first );
					break;
			};
		case 'S':
			{
					map<string,int>::iterator i = ListOfSubjects.begin();
					for(;(*i).second != WhatToTranslate ;i++){};
					return( (*i).first );
					break;
			};
		case 'C':
			{
					map<string,int>::iterator i = ListOfClasses.begin();
					for(;(*i).second != WhatToTranslate ;i++){};
					return( (*i).first );
					break;
			};
	};
};


//*********************************************************************

void Schedule::Add( char Type, string WhatToAdd )
{
	switch( Type )
	{
		case 'S':
			{
				ListOfSubjects.insert( make_pair( WhatToAdd, Subjects )  );
				TheTable.Add( 'S' );
				Subjects++;
				break;
			};

		case 'C':
			{
				ListOfClasses.insert( make_pair( WhatToAdd, Classes ) );
				TheTable.Add( 'C' );
				Classes++;
				break;
			};

		case 'R':
			{
				ListOfClassrooms.insert( make_pair( WhatToAdd, Classrooms ) );
				TheTable.Add( 'R' );
				Classrooms++;
				break;
			};

	};
};

void Schedule::Delete( char Type, string WhatToDelete )
{
	switch( Type )
	{
		case 'S':
			{
				map<string,int>::iterator i = ListOfSubjects.find( WhatToDelete );
				map<string,int>::iterator j = ListOfSubjects.begin();
				for( ; j != ListOfSubjects.end() ; j++ )
					if( (*j).second > (*i).second ) (*j).second--;
				TheTable.Delete( 'S',(*i).second );
				ListOfSubjects.erase( i );
				Subjects--;
				break;
			};

		case 'C':
			{
				map<string,int>::iterator i = ListOfClasses.find( WhatToDelete );
				map<string,int>::iterator j = ListOfClasses.begin();
				for( ; j != ListOfClasses.end() ; j++ )
					if( (*j).second > (*i).second ) (*j).second--;
				TheTable.Delete( 'C',(*i).second );
				ListOfClasses.erase( i );
				Classes--;
				break;
			};

		case 'R':
			{
				map<string,int>::iterator i = ListOfClassrooms.find( WhatToDelete );
				map<string,int>::iterator j = ListOfClassrooms.begin();
				for( ; j != ListOfClassrooms.end() ; j++ )
					if( (*j).second > (*i).second ) (*j).second--;
				TheTable.Delete( 'R',(*i).second );
				ListOfClassrooms.erase( i );
				Classrooms--;
				break;
			};

		case 'T':
			{
				map<Teacher,int>::iterator i = ListOfTeachers.begin();
				for( ; Name((*i).first) != WhatToDelete ; i++ ){};
				map<Teacher,int>::iterator j = ListOfTeachers.begin();
				for( ; j != ListOfTeachers.end() ; j++ )
					if( (*j).second > (*i).second ) (*j).second--;
				TheTable.Delete( 'T',(*i).second );
				ListOfTeachers.erase( i );
				Teachers--;
				break;
			};

	};
};

void Schedule::AddTeacher( Teacher WhatToAdd )
{
	ListOfTeachers.insert( make_pair( WhatToAdd, Teachers ) );
	TheTable.Add( 'T' );
	Teachers++;
};

void Schedule::DeleteTeacher( Teacher WhatToDelete )
{
	map<Teacher,int>::iterator i = ListOfTeachers.find( WhatToDelete );
	map<Teacher,int>::iterator j = ListOfTeachers.begin();
	for( ; j != ListOfTeachers.end() ; j++ )
	if( (*j).second > (*i).second ) (*j).second--;
	TheTable.Delete( 'T',(*i).second );
	ListOfTeachers.erase( i );
	Teachers--;
};

void Schedule::AddTeacher( string Name, string Patronymic, string Initials, string Surname )
{
	AddTeacher( Teacher( Name, Patronymic, Initials, Surname ) );
};

//*********************************************************************

void Schedule::AddGroup( int Day, int Lesson )
{
	TheTable.AddGroup( Day, Lesson );
};

void Schedule::DeleteGroup( int Day, int Lesson, int NumberOfGroup )
{
	TheTable.DeleteGroup( Day, Lesson, NumberOfGroup );
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


//*********************************************************************


Schedule::~Schedule(void)
{
};
