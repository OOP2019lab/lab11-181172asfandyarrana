#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Student:private Person
{
	string fyp_name;
	float Cgpa;
public:
	Student(void);
   Student (string fname,string lname,int age,float cgpa): Person(fname,lname,age)
{
	Cgpa=cgpa;

cout << "Student() called"<<endl;
}

	~Student(void)
	{
		cout<<"Destructor called() student"<<endl;

	}
	float Cgpagetter();
	void Cgpasetter(float);
	void printStudent();
};

