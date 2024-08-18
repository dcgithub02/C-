#include<stdio.h>
int main (int argsCount,char * args[])
{
	int offset,sum=0;
	for(offset=1;offset<argsCount;offset++)
	{
		sum=sum+args[offset];
	}


	printf("%d",sum);
	
}
