#include<stdio.h>
int main()
{
	int offset,offset1=0;
	int *baseHold[3];
	int *ptr;
	int  horiVertical1[3];
	int  horiVertical2[3];
	int  horiVertical3[3];
	for(offset=0;offset<3;offset++)
	{
		printf("enter values for 1st column");
		scanf("%d",&horiVertical1[offset]);
	}
	for(offset=0;offset<3;offset++)
	{
		printf("enter values for 2nd column");
		scanf("%d",&horiVertical2[offset]);
	}
	for(offset=0;offset<3;offset++)
	{
		printf("enter values for 3rd column");
		scanf("%d",&horiVertical3[offset]);
	}	
	baseHold[offset1]=horiVertical1;
	offset1++;
	baseHold[offset1]=horiVertical2;
	offset1++;
	baseHold[offset1]=horiVertical3;
	offset=0;
	for(offset1=0;offset1<3;offset1++)
	{
	ptr=baseHold[offset1];
	printf("\n");
	for(offset=0;offset<3;offset++)
	{
		printf("%d",ptr[offset]);
	}
	}
	
	for(offset=0;)

}
