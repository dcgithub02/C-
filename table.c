#include<stdio.h>
int main()
{
	int number=1,limit=1,result=0;
	
	table1(5,5);
}

void table1(int number,int limit)
{
	int result;
	if(limit==0) return ;
	table1(number,limit-1);
	result= number*limit;
	printf("\n\t  %d  *  %d = %d ",number,limit,result);
}
