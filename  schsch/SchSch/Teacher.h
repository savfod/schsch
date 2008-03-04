// Teacher.h: interface for the Teacher class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEACHER_H__6F264D97_E5CE_409E_A04F_14D1876F2EF7__INCLUDED_)
#define AFX_TEACHER_H__6F264D97_E5CE_409E_A04F_14D1876F2EF7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#pragma once
#include<vector>
#include<string>

using namespace std;

class Teacher
{
private:
	vector<int> Subjects;

public:
	string name;
	string patronymic;
	string initials;
	string surname;


	Teacher();
	Teacher( string Name, string Patronymic, string Initials, string Surname );

	friend bool operator == ( Teacher, Teacher );
	friend bool operator < ( Teacher, Teacher );
	void AddSubject( int WhatToAdd );
	friend string Name( Teacher T );

	~Teacher(void);
};

bool operator == ( Teacher, Teacher );
bool operator < ( Teacher, Teacher );

#endif // !defined(AFX_TEACHER_H__6F264D97_E5CE_409E_A04F_14D1876F2EF7__INCLUDED_)
