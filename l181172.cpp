// l181172.cpp : Defines the entry point for the console application.
//
#include "Faculty.h"
#include "Person.h"
#include "Student.h"
#include "stdafx.h"



void main()
{
	Student s("Ted","Thompson",22,3.91);
	Faculty f("Richard","Karp",45,2,420);
//	Person() called
//Student() called
//Person() called
//Constructor of faculty()
//Destructor called faculty()
//Destructor called() person
//Destructor called() student
//Destructor called() person
		 //here the number of courses is 2
		 //and the extension number is 420
 
	s.printStudent();
	f.printFaculty();

	/*Person() called
Student() called
Person() called
Constructor of faculty()
The first name of the student is
Ted
The last name is
Thompson
The age is
22
THE cgpa of the student is
3.91
The first name of the student is
Richard
The last name is
Karp
The age is
45
The numbert of courses are
2
The phone extension is
420
Destructor called faculty()
Destructor called() person
Destructor called() student
Destructor called() person*/
}
