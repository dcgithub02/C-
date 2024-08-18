#include<stdlib.h>
#include<iostream>
using namespace std;
class StudentMarksDisplay
{
	int noOfStudents;
	int noOfSubjects;
	int ** basePtr;
	void displayValues()
	{
		int rowCount=0,colCount=0;
		for(rowCount=0;rowCount<noOfSubjects;rowCount++)
		{
			while(basePtr[rowCount][colCount]!=-1)
			{
			printf("%d",basePtr[rowCount][colCount++]);
			}
		}
	}
};
