#include "Table.h"

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
	const int NOD = NumberOfDays;
	const int NOL = NumberOfLessons;
	const int NOC = NumberOfClasses;
	vector<vector<vector<BigBox>>> TheTable (NumberOfDays,vector<vector<BigBox>>(NumberOfLessons,vector<BigBox>(NumberOfClasses)));
};

vector<int> Table::FreeTeachers(int Day,int Lesson)
{
	return(vector<int>(0));
};

vector<int> Table::FreeClassrooms(int Day,int Lesson)
{
	return(vector<int>(0));
};


void Table::WriteTeacherTo(int Teacher,int Day,int Lesson,string Class)
{
};

void Table::WriteClassroomTo(int Classroom,int Day,int Lesson,string Class)
{
};

void Table::WriteLessonTo(int Subject,int Day,int Lesson,string Class)
{
};


Table::~Table(void)
{
};
