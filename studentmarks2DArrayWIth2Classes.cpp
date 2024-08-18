#include<stdio.h>
#include<stdlib.h>
using namespace std;
class SubjectMarks
{
	private:
	int **subjectMark;
	int *temp,offset;
	char *caption[5];
	int noOfStudents,noOfSubjects,marksLimit;
	public:
	SubjectMarks(int noOfSubjects,int noOfStudents )
	{
		this->noOfStudents=noOfStudents;
		this->noOfSubjects=noOfSubjects;
		this->marksLimit=50;
		this->subjectMark= new int*[this->noOfSubjects];
		for(offset=0;offset<noOfStudents;offset++)
		{
			this->temp=new int[this->noOfStudents];
		}
		
	}
	void subjectsName()
	{
	this->caption[0]="Maths";
	this->caption[1]="Physics";
	this->caption[2]="chemistry";
	this->caption[3]="hindi";
	this->caption[4]="punjabi";
	}

	void setData(int marks,int rowCount,int colCount )
	{
			this->temp[colCount]=marks;
			this->subjectMark[rowCount]=this->temp;
	}

	void displayFilteredData()
	{
		int subjectCount[this->noOfStudents]={0};
		int rowCount=0,colCount=0;
		subjectsName();
		for(rowCount=0;rowCount<this->noOfSubjects;rowCount++)
		{
		printf("\n\t subject %d marks above %d are : ",rowCount+1,this->marksLimit);
		for(colCount=0;colCount<this->noOfStudents;colCount++)
		{
			if(this->subjectMark[rowCount][colCount]>this->marksLimit)
			{
			printf("\n\t subject name: %s ",caption[colCount]);
			printf(" %d\t",this->subjectMark[rowCount][colCount]);
			subjectCount[colCount]++;
			}
		}
	}
	for(rowCount=0;rowCount<this->noOfStudents;rowCount++)
	{
		printf("\n\t total students got above %d marks in subject name: %s are ",this->marksLimit,caption[rowCount]);
		printf("%d",subjectCount[rowCount]);
	}
}
};
int main()
{
	
	int rowCount=0,colCount=0;
	int noOfStudents=0,noOfSubjects=0,marks;
	printf("\n\tEnter number of subjects ");
	scanf("%d",&noOfSubjects);
	printf("\n\tEnter number of  students");
	scanf("%d",&noOfStudents);
	SubjectMarks obj(noOfSubjects,noOfStudents);
	obj.subjectsName();
	for(rowCount=0;rowCount<noOfSubjects;rowCount++)
	{
		printf("\n\tenter subject %d :",rowCount+1);
		for(colCount=0;colCount<noOfStudents;colCount++)
		{
		printf("\n\tEnter the student %d marks",colCount);
		scanf("%d",&marks);
		obj.setData(marks,rowCount,colCount);
		
		}
	}

	obj.displayFilteredData();
}
