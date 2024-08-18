#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class SubjectMarks
{
	private:
	int **basePtr;
	int *temp;
	char **caption;
	int noOfStudents,noOfSubjects,marksLimit;
	public:
	SubjectMarks(int noOfStudents=0,int noOfSubjects=0,int marksLimits=0 )
	{
		this->noOfStudents=noOfStudents;
		this->noOfSubjects=noOfSubjects;
		this->marksLimit=marksLimits;
		this->basePtr= new int*[noOfStudents];
	    this->caption= new char*[noOfSubjects];
		
	}
//	SubjectMarks()
//	{
//	
//		this->subjectMark= new int*[noOfStudents];
//	    this->caption= new char*[noOfSubjects];
//		
//	}
	void setSubjects()
	{		
		char * temp;
		char ch;
		int offset=0,offset1=0;
		for(offset=0;offset<this->noOfSubjects;offset++)
		{
			fflush(stdin);
			offset1=0;
			temp= new char[10];
			printf("\n\t Enter Subject name : ");
			while((ch=fgetc(stdin))!='\n')
			{
				temp[offset1++]=ch;
			}
			temp[offset1]='\0';
			this->caption[offset]=temp;
		}
		//printf("%s",caption[1]);
	}
	void setData( )
	{
		int rowCount=0,colCount=0,marks=0;
		for(rowCount=0;rowCount<noOfSubjects;rowCount++)
		{
			printf("\n\tenter subject %s marks : ", this->caption[rowCount]);
			this->temp=new int[noOfSubjects];
			for(colCount=0;colCount<noOfStudents;colCount++)
			{
				printf("\n\tEnter the student %d marks ",colCount+1);
				scanf("%d",&marks);
				this->temp[colCount]=marks;
			}
			this->basePtr[rowCount]=this->temp;
		}	
	}
	void displayFilteredData()
	{
		int count=0;
		int rowCount=0,colCount=0;
		for(rowCount=0;rowCount<this->noOfSubjects;rowCount++)
		{
			printf("\n\t subject- %s marks above %d are : ",this->caption[rowCount],this->marksLimit);
			count=0;
			for(colCount=0;colCount<this->noOfStudents;colCount++)
			{
				if(this->basePtr[rowCount][colCount]>this->marksLimit)
				{
					printf("\n\t student %d marks ",colCount+1);
					printf(" %d\t",this->basePtr[rowCount][colCount]);
					count++;
				}	
			}
			printf("\n\t total students got above %d marks in subject name: %s is %d ",this->marksLimit,this->caption[rowCount],count);
		}

	}
	SubjectMarks calculateArray()
	{
		SubjectMarks obj3;
		int rowCount=0,colCount=0;
		int *temp,count;
		for(rowCount=0;rowCount<this->noOfSubjects;rowCount++)
		{
			obj3.basePtr= new int*[noOfStudents];
			for(colCount=0;colCount<this->noOfStudents;colCount++)
			{
				if(this->basePtr[rowCount][colCount]>this->marksLimit)
				{
					count++;
				}
			}
			obj3.basePtr[rowCount]=new int[count];
			for(colCount=0;colCount<count;colCount++)
			{
				if(this->basePtr[rowCount][colCount]>this->marksLimit)
				{
					obj3.basePtr[rowCount][colCount]=this->basePtr[rowCount][colCount];
					printf("%d\t",obj3.basePtr[rowCount][colCount]);
				}
			}
			obj3.basePtr[rowCount][colCount]=-1;
		}
		obj3.noOfStudents=this->noOfStudents;
		return obj3;
	}
};
int main()
{
	int rowCount,colCount;
	int noOfStudents,noOfSubjects,marksLimits;
	printf("\n\tEnter number of students ");
	scanf("%d",&noOfStudents);
	printf("\n\tEnter number of subjects ");
	scanf("%d",&noOfSubjects);
	printf("\n\tEnter marks Limit ");
	scanf("%d",&marksLimits);
	SubjectMarks obj(noOfStudents,noOfSubjects,marksLimits);
	obj.setSubjects();
	obj.setData();
	obj.displayFilteredData();
	SubjectMarks obj2;
	printf("\n\tsecond object changes****");
	obj2=obj.calculateArray();
	obj2.displayFilteredData();

}
