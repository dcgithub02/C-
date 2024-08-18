#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row=0,column=0,column1=0;
	int  **matrix;
	int **newMatrix;
	int **multiply;
	int *temp;
	int sum=0;
	int size;
	printf("Enter size");
	scanf("%d",&size);
	printf("\n\tEnter values in Matrix 1 : ");
	matrix= new int*[size];
	for(row=0;row<size;row++)
	{
		temp= new int[size];
		for(column=0;column<size;column++)
		{
			printf("\n\tmatrix[%d][%d] : ",row,column);
			scanf("%d",&temp[column]);
			
		}
		matrix[row]=temp;
	}
	printf("\n\tEnter values in Matrix 2 : ");
	newMatrix= new int*[size];
		for(row=0;row<size;row++)
	{
		temp= new int[size];
		for(column=0;column<size;column++)
		{
			printf("\n\tmatrix[%d][%d] : ",row,column);
			scanf("%d",&temp[column]);
			
		}
		 newMatrix[row]=temp;
	}
	printf("\n\tMatrix 1 : ");
	for(row=0;row<size;row++)
	{
		printf("\n\t");
		for(column=0;column<size;column++)
		{
			printf("%d\t ",matrix[row][column]);
		}
	}
	printf("\n\t Matrix 2 : ");
	for(row=0;row<size;row++)
	{
		printf("\n\t");
		for(column=0;column<size;column++)
		{
			printf("%n\t ",newMatrix[row][column]);
		}
	}
	printf("\n\t Result:-Multiplication of Matrix is : ");
	multiply=new int*[size];
	for(row=0;row<size;row++)
	{
		temp= new int[size];
		printf("\n\t");
		
		for(column=0;column<size;column++)
		{
			
		for(column1=0;column1<size;column1++)
		{
		sum=sum+matrix[row][column1]*newMatrix[column1][column];	
		}
		temp[column]=sum;
		multiply[row]=temp;
		printf("%d\t",multiply[row][column]);
		sum=0;
	}	
    }
}

