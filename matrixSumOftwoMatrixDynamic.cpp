#include<iostream>
using namespace std;
int main()
{
	int row=0,column=0;
	int  **matrix;
	int **newMatrix;
	int *calculate;
	int sizeOfMatrix;
	int **sum;
	cout<<"Enter size of Matrix";
	cin>>sizeOfMatrix;
	matrix= new int*[sizeOfMatrix];
	for(row=0;row<sizeOfMatrix;row++)
	{
		calculate= new int[sizeOfMatrix];
		for(column=0;column<sizeOfMatrix;column++)
		{
			printf("\n\tmatrix[%d][%d] : ",row,column);
			scanf("%d",&calculate[column]);
			
		}
		matrix[row]=calculate;
	}
		newMatrix= new int*[sizeOfMatrix];
		for(row=0;row<sizeOfMatrix;row++)
	{
		calculate= new int[sizeOfMatrix];
		for(column=0;column<sizeOfMatrix;column++)
		{
			printf("\n\tmatrix[%d][%d] : ",row,column);
			scanf("%d",&calculate[column]);
			
		}
		newMatrix[row]=calculate;
	}
	printf("\n\tMatrix 1 : ");
	for(row=0;row<sizeOfMatrix;row++)
	{
		printf("\n\t");
		for(column=0;column<sizeOfMatrix;column++)
		{
			printf("%d\t ",matrix[row][column]);
		}
	}
	printf("\n\t Matrix 2 : ");
	for(row=0;row<sizeOfMatrix;row++)
	{
		printf("\n\t");
		for(column=0;column<sizeOfMatrix;column++)
		{
			printf("%d\t ",newMatrix[row][column]);
		}
	}
	
		printf("\n\t Result:-Sum of Matrix is : ");
		sum= new int*[sizeOfMatrix];
	for(row=0;row<sizeOfMatrix;row++)
	{
		calculate=new int[sizeOfMatrix];
		printf("\n\t");
		for(column=0;column<sizeOfMatrix;column++)
		{
		calculate[column]=newMatrix[row][column]+matrix[row][column];
			
		}
		sum[row]=calculate;
		
    }
    for(row=0;row<sizeOfMatrix;row++)
	{
		printf("\n\t");
		for(column=0;column<sizeOfMatrix;column++)
		{
			printf("%d\t ",sum[row][column]);
		}
	}
}
	//printf("\n\tMatrix : ");

