#include<iostream>
using namespace std;
void show2(int *number,int rowLimit,int colLimit)
{
	int rowCount=0,colCount;
	for(int rowCount=0;rowCount<rowLimit;rowCount++)
	{
		printf("\n\t");
		for(int colCount=0;colCount<colLimit;colCount++)
		{
			printf("%d\t",*(number+colLimit*rowCount)+colCount);
		}
	}
}
template<int rowColLimit>
show3(int (*number)[rowColLimit])
{
	int rowCount=0,colCount=0;
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

int number[2][2]={{1,2},{3,4}};
show2((int*)number,2,2);
show3(number);
}
