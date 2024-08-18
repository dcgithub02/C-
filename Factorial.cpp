#include<stdio.h>
#include<conio.h>
int calculateFact(int num1)
{
	int fact=1;
	while(num1>0)
	{
	  fact= fact*num1;// 2*1
	  	num1--;
	}
return fact;
	}

int main()
{
	int number;
	int factorialIs;
printf(" enter the number ");
scanf("%d",&number);

	factorialIs = calculateFact(number);
	printf("Factorial of number %d  is %d ",number,factorialIs);
	
}


