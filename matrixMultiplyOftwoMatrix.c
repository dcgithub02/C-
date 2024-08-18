#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row=0,column=0,column1=0;
	int  *matrix[2];
	int *newMatrix[2];
	int *multiply[2];
	int sum=0;
	printf("\n\tEnter values in Matrix 1 : ");
	for(row=0;row<2;row++)
	{
		matrix[row]= calloc(2,sizeof(int));
		for(column=0;column<2;column++)
		{
			printf("\n\tmatrix[%d][%d] : ",row,column);
			scanf("%d",&matrix[row][column]);
			
		}
	}
	printf("\n\tEnter values in Matrix 2 : ");
		for(row=0;row<2;row++)
	{
		newMatrix[row]= calloc(2,sizeof(int));
		for(column=0;column<2;column++)
		{
			printf("\n\tmatrix[%d][%d] : ",row,column);
			scanf("%d",&newMatrix[row][column]);
			
		}
	}
	printf("\n\tMatrix 1 : ");
	for(row=0;row<2;row++)
	{
		printf("\n\t");
		for(column=0;column<2;column++)
		{
			printf("%d\t ",matrix[row][column]);
		}
	}
	printf("\n\t Matrix 2 : ");
	for(row=0;row<2;row++)
	{
		printf("\n\t");
		for(column=0;column<2;column++)
		{
			printf("%d\t ",newMatrix[row][column]);
		}
	}
	printf("\n\t Result:-Multiplication of Matrix is : ");
	for(row=0;row<2;row++)
	{
		multiply[row]=calloc(2,sizeof(int));
		printf("\n\t");
		
		for(column=0;column<2;column++)
		{
			
		for(column1=0;column1<2;column1++)
		{
		sum=sum+matrix[row][column1]*newMatrix[column1][column];	
		}
		multiply[row][column]=sum;
		printf("%d\t",multiply[row][column]);
		sum=0;
	}	
    }
}

