//add six numbers using 2 varibles
#include<stdio.h>
#include<conio.h>
int main()
{
	int number1;int number2;int sumOfSixNumbers;
	for(int count=0;count<3;count++)
{
	printf("enter two numbers");
	scanf("%d %d",&number1,&number2);
	sumOfSixNumbers = sum(number1,number2);
	}	
	printf(" sum of all numbers %d" , sumOfSixNumbers);
}

int sum(int num1,int num2)
{
	int total=0;
	total= num1+num2;
return total;
	
}
