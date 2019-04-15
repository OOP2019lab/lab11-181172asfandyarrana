#pragma once
#include "Person.h"
class Faculty:private Person
{
	int course_count;
	int extension;
public:
	Faculty(string fname, string lname,int age,int course, int ext):Person(fname, lname, age)
	{
		course_count=course;
		extension=ext;
		cout<<"Constructor of faculty()"<<endl;
	}
	~Faculty()
		{
		cout<<"Destructor called faculty()"<<endl;

	}
	void coursecountsetter(int);
	int coursecountgetter();
	void extensionsetter(int);
	int extensiongetter();
	void printFaculty();
};

