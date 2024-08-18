#define LIMIT 1000
#include<stdio.h>
void function(int num)
{
	if(num<=0) return;
	if(num>LIMIT) return;
	printf("\n\t%d",num);
	function(2*num);
	printf("\n\t%d",num);
}
int main()
{
	function(100);
}
