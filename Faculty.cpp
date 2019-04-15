#include "Faculty.h"


 void Faculty::coursecountsetter(int count)
{
	course_count=count;

}
int Faculty::coursecountgetter()
{

	return age;

}
 void Faculty::extensionsetter(int ex)
{
	extension=ex;

}
int Faculty::extensiongetter()
{

	return extension;

}
void Faculty::printFaculty()
{
	printperson();
	cout<<"The numbert of courses are"<<endl<<course_count<<endl<<"The phone extension is"<<endl<<extension<<endl;
	
}

