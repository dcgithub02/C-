#include<stdio.h>
int func(int num1,int num2)
{
	if(num2==0) return 1;
	if(num2%2==0)
	return func(num1*num2,num2/2);
	return func(num1*num2,num2/2)*num1;
}
int main()
{
	printf("%d",func(9,7));
	getchar();
	return 0;
}
