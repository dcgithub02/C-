#include<stdio.h>
#include<stdlib.h>
int main()
{
	int rowCount=0,colCount=0;
	int  subjectMarks[10][5];
	int subjectCount[5]={0};
	char *caption[5];
	caption[0]="Maths";
	caption[1]="Physics";
	caption[2]="chemistry";
	caption[3]="hindi";
	caption[4]="punjabi";
	int noOfStudents,noOfSubjects,marksLimit,count=0,index=0;
	printf("\tEnter number of Student in a class");
	scanf("%d",&noOfStudents);
	printf("\tEnter number of subjects ");
	scanf("%d",&noOfSubjects);
	printf("\n\tEnter Student subject marks .......");
	for(rowCount=0;rowCount<noOfStudents;rowCount++)
	{
		printf("\n\tstudent %d marks ",rowCount+1);
		
		for(colCount=0;colCount<noOfSubjects;colCount++)
		{
			printf("\n\tsubject name is %s",caption[colCount]);
			printf("\n\tEnter marks");
			scanf("%d",&subjectMarks[rowCount][colCount]);
		}
	}
	printf("Enter filter criteria -marks above");
	scanf("%d",&marksLimit);
	for(rowCount=0;rowCount<noOfStudents;rowCount++)
	{
		
	//	printf("\n\t");
		printf("\n\t student %d marks above %d are : ",rowCount+1,marksLimit);
		for(colCount=0;colCount<noOfSubjects;colCount++)
		{
			if(subjectMarks[rowCount][colCount]>marksLimit)
			{
				
			
				printf("\n\t subject name: %s ",caption[colCount]);
				printf(" %d\t",subjectMarks[rowCount][colCount]);
				subjectCount[colCount]++;
				
			}
			
		}
		
	}
	for(rowCount=0;rowCount<noOfSubjects;rowCount++)
	{
		printf("\n\t total students got above %d marks in subject name: %s are ",marksLimit,caption[rowCount]);
		printf("%d",subjectCount[rowCount]);
	}

}
