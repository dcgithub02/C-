#include<stdio.h>
#include<stdlib.h>
using namespace std;
class SubjectMarks
{
	private:
	int **subjectMark;
	int *temp;
	char **caption;
	int noOfStudents,noOfSubjects,marksLimit;
	public:
	SubjectMarks(int noOfStudents,int noOfSubjects,int marksLimits )
	{
		this->noOfStudents=noOfStudents;
		this->noOfSubjects=noOfSubjects;
		this->marksLimit=marksLimits;
		this->subjectMark= new int*[noOfStudents];
	    this->caption= new char*[noOfSubjects];
		
	}
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
				
			this->subjectMark[rowCount]=this->temp;
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
			if(this->subjectMark[rowCount][colCount]>this->marksLimit)
			{
			printf("\n\t student %d marks ",colCount+1);
			printf(" %d\t",this->subjectMark[rowCount][colCount]);
			count++;
		}	
		}
		printf("\n\t total students got above %d marks in subject name: %s is %d ",this->marksLimit,this->caption[rowCount],count);
	}

}
};
int main()
{
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

}
