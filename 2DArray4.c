#include<stdio.h>
int main()
{
 int array2DPtr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 int *ptr2D,rowCount,colCount;
 printf("\n\t array :\n\t");
 for(rowCount=0;rowCount<3;rowCount++)
 {
 	printf("\n\t%u",array2DPtr+rowCount);
 	
}
printf("\n\t2D array : \n\t");
for(rowCount=0;rowCount<3;rowCount++)
{
	printf("\n\t row%d baseAddress :%u\n\t",rowCount+1,array2DPtr+rowCount);
	for(colCount=0;colCount<3;colCount++)
	{
		printf("%u ",*(array2DPtr+rowCount)+colCount);
		
	}
	}	
	printf("\n\t2D Array : \n\t");
	for(rowCount=0;rowCount<3;rowCount++)
	{
		printf("\n\t%u",*array2DPtr+rowCount);
	}
	printf("\n\t==============");
	printf("\n\t value : %d",*array2DPtr);
	printf("\n\t value : %d",**array2DPtr);
}
