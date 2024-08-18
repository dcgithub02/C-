#include<stdio.h>
int function(int num)
{
	if(num%2) return(num++);
	else return function(function(num-1));
}

int main()
{
	printf("%d",function(200));
	getchar();
	return 0;
}
