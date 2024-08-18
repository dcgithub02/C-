#include<iostream>
using namespace std;
class StudentsMarks
{
	char * subject;
	int marks;
	int student;
 	void setData(char *sub,int marks,int student)
	{
		this->subject=sub;
		this->marks=marks;
		this->student=student;
	}
}
