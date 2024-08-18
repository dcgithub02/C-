#include<stdio.h>
	int main()
	{
		function(7);
	}
void function(int num)
{
	if(num<1) return ;
	function(num-1);
	function(num-3);
	printf(" %d ",num);
}

	

