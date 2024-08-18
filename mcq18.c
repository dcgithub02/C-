#include<stdio.h>
long int fun(int num)
{
	if(num==1) return 1;
	else
	return((long) pow(num,num)+fun(num-1));
}
int main()
{
	printf("\n\t out : %d",fun(5));
}
