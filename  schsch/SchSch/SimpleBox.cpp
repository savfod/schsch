// SimpleBox.cpp: implementation of the SimpleBox class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "SchSch.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction/Functions
//////////////////////////////////////////////////////////////////////

#include "SimpleBox.h"

SimpleBox::SimpleBox(void)
{
}


int SimpleBox::TakeMember( char Type )
{
	switch( Type )
	{
	case 'T':
		{
			return Teacher;
			break;
		}
	case 'R':
		{
			return Classroom;
			break;
		}
	case 'S':
		{
			return Subject;
			break;
		}
	case 'C':
		{
			return Class;
			break;
		}
	};
};

void SimpleBox::WriteMember( char Type, int WhatToWrite )
{
	switch( Type )
	{
	case 'T':
		{
			Teacher = WhatToWrite;
			break;
		}
	case 'R':
		{
			Classroom = WhatToWrite;
			break;
		}
	case 'S':
		{
			Subject = WhatToWrite;
			break;
		}
	case 'C':
		{
			Class = WhatToWrite;
			break;
		}
	};
};

SimpleBox::~SimpleBox(void)
{
}