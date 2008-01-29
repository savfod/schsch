#include "Schedule.h"
#include<vector>

using namespace std;

Schedule::Schedule(void)
{
};


//*********************************************************************


list<string> Schedule::FreeTeachers( int Day, int Lesson )
{
	return(list<string>(0));
};

list<string> Schedule::FreeClassrooms( int Day, int Lesson )
{
	return(list<string>(0));
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

void Schedule::WriteTo( char Type, int Day, int Lesson, string Class, int group, int WhatToWrite )
{
};

void Schedule::WriteTo( char Type, int Day, int Lesson, string Class, int WhatToWrite )
{
};


//*********************************************************************


Schedule::~Schedule(void)
{
};
