#include<stdio.h>
int function(int num)
{
	if(num==0) return 0;
	else return (num%2+10*function(num/2));
}
int main()
{
	int num=10;
	printf("%d",function(num));
	return 0;
}
