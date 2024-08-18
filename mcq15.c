#include<stdio.h>
int product(int num1,int num2)
{
	if(num1<num2) return product(num2,num1);
	else if(num2!=0)
	return (num1+product(num1,num2-1));
	else return 0;
}
int main()
{
	int num1=25,num2=8;
	printf("\n\t out : %d",product(num1,num2));
}
