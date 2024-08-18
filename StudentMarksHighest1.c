#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *student;
   int *marks;
	
	char *captions[5];
	int offset=0,offset1=0,highest=0,index;
	
	captions[0]="Maths: ";
	captions[1]="Science: ";
	captions[2]="Hindi: ";
	captions[3]="English: ";
	captions[4]="Punjabi: ";
	student= calloc(5,sizeof(int));
	for(index=0;index<5;index++)
	{
		printf("\n\tEnter Student %d Marks ",index+1);
		marks= calloc(5,sizeof(int));
	for(offset=0;offset<5;offset++)
	{
	  
	printf("\n\t %s",captions[offset]);
	scanf("%d",&marks[offset]);
	if(offset==0)highest=marks[0];
	if(offset>1)
	{
		if(marks[offset]>highest)
		{
			highest=marks[offset];
		}
	}

		student[index]=marks;
	}

printf("\n\tstudent%d highest marks is %d",index+1,highest);
}

}


