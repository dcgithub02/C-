#include<stdio.h>
int function(int num)
{
	if(num==0) return 0;
	return(num%10+function(num/10));
}

int main()
{
	int num=12345;
	int result=function(num);
	printf("out : %d\n",result);
}
