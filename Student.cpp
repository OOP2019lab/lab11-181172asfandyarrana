#include "Student.h"


float Student:: Cgpagetter()
{

 return Cgpa;

}
void Student::Cgpasetter(float cgpa)
{
   Cgpa=cgpa;


}
void Student ::printStudent()
{
   printperson();
 cout<<"THE cgpa of the student is"<<endl<<Cgpa<<endl;

}
 
//void Student::printStudent()
//{
// 
//cout << first_name << ” ” << last_name
//     << ”is  ” << age <<” years old, his cgpa is ” << cgpa;
//}
