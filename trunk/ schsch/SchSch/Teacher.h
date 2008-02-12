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
	string name;
	string patronymic;
	string initials;
	string surname;
	vector<string> Subjects;

public:
	Teacher();
	Teacher( string S );

	bool Teacher::operator ==(Teacher T);
	bool Teacher::operator <=(Teacher T);
	void AddSubject(string);
	string String();

	~Teacher(void);
};

#endif // !defined(AFX_TEACHER_H__6F264D97_E5CE_409E_A04F_14D1876F2EF7__INCLUDED_)
