#include<stdio.h>
int main()
{
	int listOfMarks[10];
	int offset;
	int	marksFrequency[11]={0};
	for(offset=0;offset<10;offset++)
	{
		printf("enter number");
		scanf("%d",&listOfMarks[offset]);
	}
	for(offset=0;offset<10;offset++)
	{
		marksFrequency[listOfMarks[offset]]++;
	}
	for(offset=0;offset<11;offset++)
	{
		printf("\n\t students who got %d marks are %d",offset,	marksFrequency[offset]);
	}
	
}
