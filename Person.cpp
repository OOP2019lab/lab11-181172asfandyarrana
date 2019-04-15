#include "Person.h"


void Person::agesetter(int age)
{
	this->age=age;

}
int Person::agegetter()
{

	return age;

}
void Person::fnamesetter(string name)
{
	firstname=name;

}
string Person::fnamegetter()
{

	return firstname;

}

void Person::lnamesetter(string name)
{

	this->lastname=name;
}
string Person::lnamegetter()
{

	return lastname;

}

void Person:: printperson()
{
	cout<<"The first name of the student is"<<endl<<firstname<<endl<<"The last name is"<<endl<<lastname<<endl<<"The age is "<<endl<<age<<endl; 

}