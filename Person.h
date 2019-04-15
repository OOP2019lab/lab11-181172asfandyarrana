#pragma once
#include <string>
#include <iostream>
using namespace std;
class Person
{
	string firstname;
	string lastname;
protected:
	int age;
public:	 
Person (string fname, string lname, int age)
{
	firstname=fname;
	lastname=lname;
	this->age=age;
	cout << "Person() called"<<endl;
}

	~Person(void)
	{
		cout<<"Destructor called() person"<<endl;

	}
	void fnamesetter(string);
	void lnamesetter(string);
	void agesetter(int);
	string fnamegetter();
	string lnamegetter();
	int agegetter();
	void printperson();
};

