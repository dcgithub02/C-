#include<stdio.h>
int main()
{
	function(4);
}
void function(int num)
{
	if(num<=1)printf("%d",num);
	else
	{
		function(num/2);
		printf("%d",num%2);
	}
}
