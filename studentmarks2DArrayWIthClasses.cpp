#include<stdio.h>
#include<stdlib.h>
using namespace std;
class SubjectMarks
{
	private:
	int **subjectMark;
	int *temp;
	char *caption[5];
	int noOfStudents,noOfSubjects,marksLimit;
	public:
	SubjectMarks(int noOfStudents,int noOfSubjects )
	{
		this->noOfStudents=noOfStudents;
		this->noOfSubjects=noOfSubjects;
		this->marksLimit=50;
		this->subjectMark= new int*[noOfStudents];
	
		
	}
	char * subjectsName(int row)
	{
	this->caption[0]="Maths";
	this->caption[1]="Physics";
	this->caption[2]="chemistry";
	this->caption[3]="hindi";
	this->caption[4]="punjabi";
	return this->caption[row];
	}

	void setData(int marks,int rowCount,int colCount )
	{
		   if(colCount==0)
		   {
		   		this->temp=new int[noOfSubjects];
		   }
		
			this->temp[colCount]=marks;
			this->subjectMark[rowCount]=this->temp;
	}

	void displayFilteredData()
	{
		int subjectCount[this->noOfSubjects]={0};
		int rowCount=0,colCount=0;
	//	caption=subjectsName(this->noOfSubjects);
	for(rowCount=0;rowCount<this->noOfStudents;rowCount++)
	{
		printf("\n\t student %d marks above %d are : ",rowCount+1,this->marksLimit);
		for(colCount=0;colCount<this->noOfSubjects;colCount++)
		{
			if(this->subjectMark[rowCount][colCount]>this->marksLimit)
			{
			printf("\n\t subject name: %s ",caption[colCount]);
			printf(" %d\t",this->subjectMark[rowCount][colCount]);
			subjectCount[colCount]++;
			}
		}
	}
	for(rowCount=0;rowCount<this->noOfSubjects;rowCount++)
	{
		printf("\n\t total students got above %d marks in subject name: %s are ",this->marksLimit,caption[rowCount]);
		printf("%d",subjectCount[rowCount]);
	}
}
};
int main()
{
	
	int rowCount=0,colCount=0;
	char * caption;
	int noOfStudents,noOfSubjects,marks;
	printf("\n\tEnter number of students ");
	scanf("%d",&noOfStudents);
	printf("\n\tEnter number of subjects ");
	scanf("%d",&noOfSubjects);
	SubjectMarks obj(noOfStudents,noOfSubjects);
	
	for(rowCount=0;rowCount<noOfStudents;rowCount++)
	{
		
		printf("\n\tenter student %d marks :", rowCount+1);
		for(colCount=0;colCount<noOfSubjects;colCount++)
		{
			caption=obj.subjectsName(colCount);
		printf("\n\tEnter the subject marks %s",caption);
		scanf("%d",&marks);
		obj.setData(marks,rowCount,colCount);
		}
	}

	obj.displayFilteredData();
}
