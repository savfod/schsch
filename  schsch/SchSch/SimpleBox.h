// SimpleBox.h: interface for the SimpleBox class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SIMPLEBOX_H__E7572851_D538_4996_87B1_203D0B0E6A01__INCLUDED_)
#define AFX_SIMPLEBOX_H__E7572851_D538_4996_87B1_203D0B0E6A01__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#pragma once
#include<string>
#include<vector>

using namespace std;


class SimpleBox
{
private:
	int Teacher;
	int Classroom;
	int Subject;
	int Class;

public:
	SimpleBox(void);

	int TakeMember( char Type );          //required types: 'T','R','S','C'

	void WriteMember( char Type, int WhatToWrite );

	~SimpleBox(void);
};

typedef vector< SimpleBox > BigBox;

#endif // !defined(AFX_SIMPLEBOX_H__E7572851_D538_4996_87B1_203D0B0E6A01__INCLUDED_)
