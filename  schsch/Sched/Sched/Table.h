#pragma once
#include "BigBox.h"

class Table
{
private:
	int NumberOfDays,NumberOfLessons,NumberOfTeachers,NumberOfSubjects,NumberOfClassrooms,NumberOfClasses;
	vector<vector<vector<BigBox>>> TheTable;
public:
	Table(void);
	Table(int HowManyDays,int HowManyLessons,int HowManyTeachers,int HowManySubjects,int HowManyClassrooms,int HowManyClasses);

	vector<int> FreeTeachers(int Day,int Lesson);
	vector<int> FreeClassrooms(int Day,int Lesson);

	void WriteTeacherTo(int Teacher,int Day,int Lesson,string Class);
	void WriteClassroomTo(int Classroom,int Day,int Lesson,string Class);
	void WriteLessonTo(int Subject,int Day,int Lesson,string Class);

	~Table(void);
};
