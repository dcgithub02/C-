#include<stdio.h>

void function(int num)
{
	if(num>0)
	{
		function(num-1);
		printf("\n\t %d ",num);
		function(num-1);
	}
}

int main()
{
	function(7);
	return 0;
}
