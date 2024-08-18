#include<iostream>
using namespace std;
class filterStudents
{
	private:
	int noOfSubjects;
	int **basePtr;
	int noOfActualStudents;
	//int *temp;
	public:
	void setStudents(int rowCount,int noOfActualStudents )
	{
		this->basePtr[rowCount]= new int[noOfActualStudents];
	}

void setBaseAddress(int **ptr)
{
	this->basePtr=ptr;
}	
int** getBaseAddress()
{
	return this->basePtr;
}
 void setNoOfSubjects(int count)
 {
 	this->noOfSubjects=count;
 }


	void filteredDataDisplay()
	{
		int rowCount=0;int colCount=0;
	
		for(rowCount=0;rowCount<this->noOfSubjects;rowCount++)
		{
			printf("\n\t");
			colCount=0;
			while(this->basePtr[rowCount][colCount]!=-1)
			{
				printf("\t%d",this->basePtr[rowCount][colCount]);
				colCount++;
			}
		}
		
	}
};
class SubjectMarks
{
	private:
	int **marks;
	char **caption;
	int *students;
	int noOfStudents,noOfSubjects,marksLimit;
	public:
//constructor
SubjectMarks(int noOfSubjects,int noOfStudents,int marksLimit)
{
	this->noOfSubjects=noOfSubjects;
	this->noOfStudents=noOfStudents;
	this->marksLimit=marksLimit;
	this->marks= new int *[noOfSubjects];
	this->caption= new char*[noOfSubjects];
}


void setSubjects()
{
	int rowCount=0,colCount=0;
	int offset=0,offset1=0;
	char ch;
	char *temp;

	for(rowCount=0;rowCount<this->noOfSubjects;rowCount++)
	{
			fflush(stdin);
		printf("\n\t Enter subject names ");
		temp= new char[10];
		offset=0;
		while((ch=fgetc(stdin))!='\n')
		{
		temp[offset++]=ch;
		}
		temp[offset]='\0';
		this->caption[rowCount]=temp;
		
	}
}
void setSubjectMarks(int noOfSubjects,int noOfStudents)
{
	int rowCount=0,colCount=0,marks;
	for(rowCount=0;rowCount<noOfSubjects;rowCount++)
	{
		this->students= new int[noOfStudents];
		printf("\n\t Please enter - %s marks of students ", caption[rowCount]);
		for(colCount=0;colCount<noOfStudents;colCount++)
		{
			printf("\n\t Enter student %d marks " ,colCount+1);
			scanf("%d",&this->students[colCount]);
		}
		this->marks[rowCount]=this->students;
	}
}

void displayStudentMarks()
{
	int rowCount=0,colCount=0;
	
	for(rowCount=0;rowCount<noOfSubjects;rowCount++)
	{
		printf("\n\t subject - %s marks ",caption[rowCount]);
		for(colCount=0;colCount<noOfStudents;colCount++)
		{
			if(this->marks[rowCount][colCount]>this->marksLimit)
			{
				printf("\n\t student %d mark is ",colCount+1);
				printf("\t %d",this->marks[rowCount][colCount]);
				
				
			}
		}
	}
}

filterStudents filterStudentsMarks()
{
	filterStudents obj1;
	int rowCount,colCount,count=0;
	int **marksfiltered;
	//int *temp;
//	marksfiltered=obj1.getBaseAddress();
	marksfiltered= new int *[this->noOfSubjects];
	obj1.setBaseAddress(marksfiltered);
	for(rowCount=0;rowCount<this->noOfSubjects;rowCount++)
	{
		count=0;
		for(colCount=0;colCount<this->noOfStudents;colCount++)
		{
			if(this->marks[rowCount][colCount]>this->marksLimit)count++;
		}	
		obj1.setStudents(rowCount,count+1);
			
		for(colCount=0;colCount<count;colCount++)
		{
			if(this->marks[rowCount][colCount]>this->marksLimit)
			{
				obj1.getBaseAddress()[rowCount][colCount]=this->marks[rowCount][colCount];
			}
		
		}
			obj1.getBaseAddress()[rowCount][colCount]=-1;
	}
	obj1.setNoOfSubjects(this->noOfSubjects);
	return obj1;
}

};
int main()
{
	filterStudents obj2;
	int noOfSubjects,noOfStudents,marksLimit;
	printf("\n\t Enter number of Subjects ");
	scanf("%d",&noOfSubjects);
	printf("\n\t Enter number of Students ");
	scanf("%d",&noOfStudents);
	printf("\n\t Enter Marks Limit ");
	scanf("%d",&marksLimit);
	SubjectMarks obj(noOfSubjects,noOfStudents,marksLimit);
	obj.setSubjects();
	obj.setSubjectMarks(noOfSubjects,noOfStudents);
	obj.displayStudentMarks();
	printf("\n\t***********************************");	
	obj2=obj.filterStudentsMarks();
	obj2.filteredDataDisplay();
	
	
}
