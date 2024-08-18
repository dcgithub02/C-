#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row=0,column=0;
	int  *matrix[3];
	int *newMatrix[3];
	int *sum[3];
	for(row=0;row<3;row++)
	{
		matrix[row]= calloc(3,sizeof(int));
		for(column=0;column<3;column++)
		{
			printf("\n\tmatrix[%d][%d] : ",row,column);
			scanf("%d",&matrix[row][column]);
			
		}
	}
		for(row=0;row<3;row++)
	{
		newMatrix[row]= calloc(3,sizeof(int));
		for(column=0;column<3;column++)
		{
			printf("\n\tmatrix[%d][%d] : ",row,column);
			scanf("%d",&newMatrix[row][column]);
			
		}
	}
	printf("\n\tMatrix 1 : ");
	for(row=0;row<3;row++)
	{
		printf("\n\t");
		for(column=0;column<3;column++)
		{
			printf("%d\t ",matrix[row][column]);
		}
	}
	printf("\n\t Matrix 2 : ");
	for(row=0;row<3;row++)
	{
		printf("\n\t");
		for(column=0;column<3;column++)
		{
			printf("%d\t ",newMatrix[row][column]);
		}
	}
	
		printf("\n\t Result:-Sum of Matrix is : ");
	for(row=0;row<3;row++)
	{
		sum[row]=calloc(3,sizeof(int));
		printf("\n\t");
		for(column=0;column<3;column++)
		{
		sum[row][column]=newMatrix[row][column]+matrix[row][column];
			printf("%d\t",sum[row][column]);
		}
    }
}
	//printf("\n\tMatrix : ");

