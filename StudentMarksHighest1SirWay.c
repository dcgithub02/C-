#include<stdio.h>
#include<stdlib.h>
int main()
{
   	int *student;
   	int *marks;
	char *captions[5];
	int offset=0,offset1=0,highest=0,index,offset2=0;
	captions[0]="Maths: ";
	captions[1]="Science: ";
	captions[2]="Hindi: ";
	captions[3]="English: ";
	captions[4]="Punjabi: ";
	student= calloc(5,sizeof(int));
	for(index=0;index<2;index++)
	{
		printf("\n\tEnter Student %d Marks ",index+1);
		marks= calloc(5,sizeof(int));
		for(offset=0;offset<2;offset++)
		{
			printf("\n\t %s",captions[offset]);
			scanf("%d",&marks[offset]);
		}
		student[index]=marks;
	}
	offset=0;
	highest=marks[offset];
	for(offset1=0;offset1<2;offset1++)
	{
		marks=student[offset1];
		highest=marks[0];
		for(offset=0;offset<2;offset++)
		{
			if(marks[offset]>highest)
			{
				highest=marks[offset];
				offset2=offset;
			}
		}
		printf("\n\t Students %s %d is the highest marks ",captions[offset2],offset1+1);
		printf(" %d ",highest);
		offset2=0;
	}
}


