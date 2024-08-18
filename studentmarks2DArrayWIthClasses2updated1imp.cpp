#include<stdlib.h>
#include<iostream>
//class StudentMarksDisplay;
using namespace std;
class StudentMarksDisplay
{
	private:
	int noOfSubjects;
	int ** basePtr1;
	public:
	void displayValues()
	{
		int rowCount=0,colCount=0;
		cout<<"\n\tno of subjects : "<<noOfSubjects;
		for(rowCount=0;rowCount<noOfSubjects;rowCount++)
		{
			printf("\n\t");
			colCount=0;
			while(basePtr1[rowCount][colCount]!=-1)
			{
				printf("%d\t",basePtr1[rowCount][colCount]);
				colCount++;
			}
		}
	}
	void setBase(int** pointer)
	{
		this->basePtr1=pointer;
	}
	void setNoOfStudent(int rowCount,int* pointer)
	{
		this->basePtr1[rowCount]=pointer;
	}
	int** getBase()
	{
		return basePtr1;
	}
	void setNoOfSubject(int count)
	{
		this->noOfSubjects=count;
	}
};
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
		this->basePtr= new int*[noOfSubjects];
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
			this->temp=new int[noOfSubjects];//ask if it will hv noOfstudent instead of subject 
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
	StudentMarksDisplay calculateArray()
	{
		StudentMarksDisplay obj3;
		int rowCount=0,colCount=0;
		int *temp,count;
		obj3.setBase(new int*[this->noOfSubjects]);
		for(rowCount=0;rowCount<this->noOfSubjects;rowCount++)
		{
			count=0;
			for(colCount=0;colCount<this->noOfStudents;colCount++)
			{
				if(this->basePtr[rowCount][colCount]>this->marksLimit)
				{
					count++;
				}
			}
			obj3.setNoOfStudent(rowCount,new int[count+1]);
			for(colCount=0;colCount<count;colCount++)
			{
				if(this->basePtr[rowCount][colCount]>this->marksLimit)
				{
					obj3.getBase()[rowCount][colCount]=this->basePtr[rowCount][colCount];
				}
			}
			obj3.getBase()[rowCount][colCount]=-1;
			
		}
		obj3.setNoOfSubject(this->noOfSubjects);
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
	cout<<"\n\t======================\n\t";
	StudentMarksDisplay obj2;
	printf("\n\tsecond object changes : \n\t");
	obj2=obj.calculateArray();
	obj2.displayValues();

}
