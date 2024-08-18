#include<stdio.h>
void show1(int rowLimit,int colLimit,int number[][colLimit])
{
	int rowCount,colCount;
	for(rowCount=0;rowCount<rowLimit;rowCount++)
	{
		printf("\n\t");
		for(colCount=0;colCount<colLimit;colCount++)
		{
			printf("%d\t",number[rowCount][colCount]);
		}
	}
}
void show2(int *number,int rowLimit,int colLimit)
{
	int rowCount,colCount;
	for(rowCount=0;rowCount<rowLimit;rowCount++)
	{
		printf("\n\t");
		for(colCount=0;colCount<colLimit;colCount++)
		{
			printf("%d\t",*(number+rowCount*colLimit)+colCount);
		}
	}
	
}
void show3(const int rowColLimit,int(*number)[rowColLimit])
{
	int rowCount,colCount;
	for(rowCount=0;rowCount<rowColLimit;rowCount++)
	{
		printf("\n\t");
		for(colCount=0;colCount<rowColLimit;colCount++)
		{
			printf("%d\t",number[rowCount][colCount]);
		}
	}
}
int main()
{
	int number[3][3]={{1,2,3},{4,5,6},{5,6,7}};
	printf("\n\t 2DArray");
	show1(3,3,number);
	printf("\n\t 2DArray");
	show2(number,3,3);
		printf("\n\t 2DArray");
		show3(3,number);
}
	
