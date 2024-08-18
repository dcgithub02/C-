#include<iostream>
using namespace std;
int main()
{
	int row=0,column=0;
	int  **matrix;
	int **newMatrix;
	int *calculate;
	int sizeOfMatrix;
	int **subtract;
	cout<<"Enter size of Matrix : ";
	cin>>sizeOfMatrix;
	matrix= new int*[sizeOfMatrix];
	for(row=0;row<sizeOfMatrix;row++)
	{
		calculate= new int[sizeOfMatrix];
		for(column=0;column<sizeOfMatrix;column++)
		{
			printf("\n\tmatrix[%d][%d] : ",row,column);
			cin>>calculate[column];
		}
		
	matrix[row]=calculate;
	}
	newMatrix= new int*[sizeOfMatrix];
	for(row=0;row<sizeOfMatrix;row++)
	{
		calculate= new int[sizeOfMatrix];
		for(column=0;column<sizeOfMatrix;column++)
		{
			printf("newMatrix[%d][%d] ",row,column);
			cin>>calculate[column];
		}
		newMatrix[row]=calculate;
	}
	for(row=0;row<sizeOfMatrix;row++)
	{
		for(column=0;column<sizeOfMatrix;column++)
		{
			printf("\t%d",matrix[row][column]);
		}
	}
}

