#include<stdio.h>
void function(int num)
{
	if(num>0)
	{
		function(--num);
		printf("%d",num);
		function(--num);
	}
}
int main()
{
	int a=4;
	function(a);
	getchar();
	return 0;
}
