#pragma once
#include<vector>

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

	bool Teacher::operator==(Teacher T);
	void AddSubject(string);

	~Teacher(void);
};
