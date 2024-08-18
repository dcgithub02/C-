#include<stdio.h>
#include<iostream>
using namespace std;
void show2(int *number,int rowLimit,int colLimit)
{
	int rowCount,colCount;
	for(rowCount=0;rowCount<rowLimit;rowCount++)
	{
		printf("\n\t");
		cout<<"\n\t";
		for(colCount=0;colCount<colLimit;colCount++)
		{
			printf("%d\t",*(number+rowCount*colLimit)+colCount);
		}
	}
	
}
template<int rowColLimit>
void show3( int (*number)[rowColLimit],int rowLimit)
{
	int rowCount,colCount;
	for(rowCount=0;rowCount<rowLimit;rowCount++)
	{
	//	printf("\n\t");
		cout<<"\n\t";
		for(colCount=0;colCount<rowColLimit;colCount++)
		{
			//printf("%d\t",number[rowCount][colCount]);
			cout<<"\t"<<number[rowCount][colCount];
		}
	}
}
int main()
{
	int number[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	printf("\n\t 2DArray");
	show2((int*)number,3,3);
	printf("\n\t 2DArray");
	show3(number,2);
}
	
