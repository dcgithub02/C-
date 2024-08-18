#include<stdio.h>
int main (int argsCount,char * args[])
{
	int offset;
	for(offset=1;offset<argsCount;offset++)
	{
		printf("\n %s",args[offset]);
	}
	
}
