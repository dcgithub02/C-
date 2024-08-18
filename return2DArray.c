#include<stdio.h>
int ** call2DArray(int* array2DPtr,int rowLimit,int colLimit)
{
	int rowCount, colCount;
	
	for(rowCount=0;rowCount<rowLimit;rowCount++)
	{
		for(colCount=0;colCount<colLimit;colCount++)
		{
			*((array2DPtr+rowCount*rowLimit)+colCount)=5;
			
		}
	}
	return (array2DPtr);
}
int main()
{
	int array2DPtr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int ** ptr2D,rowCount,colCount;
//	int colLimit=3;
	for(rowCount=0;rowCount<3;rowCount++)
	{
		printf("\n\t");
		for(colCount=0;colCount<3;colCount++)
		{
			printf("%d\t",array2DPtr[rowCount][colCount]);
		}
	}
	ptr2D=call2DArray(array2DPtr,3,3);
	printf("\n\t2D array:");
	for(rowCount=0;rowCount<3;rowCount++)
	{
		printf("\n\t");
		for(colCount=0;colCount<3;colCount++)
		{
			printf("%d\t",array2DPtr[rowCount][colCount]);
		}
	}
	printf("\n\t 2D Array");
		for(rowCount=0;rowCount<3;rowCount++)
		{
			printf("\n\t");
			for(colCount=0;colCount<3;colCount++)
			{
			printf("%d\t",*((ptr2D+rowCount)+colCount));
			}
		}
}
