//add six numbers using 2 varibles
#include<stdio.h>
#include<conio.h>
int sum1(int num1,int num2)
{
	int total=0;
	total= num1+num2;
return total;
	
}
//a+b+c+d+e+f;
int main()
{
	int number1=0;
	int number2=0;
	//int sumOfSixNumbers=0;
	printf("enter two numbers");
	scanf("%d %d",&number1,&number2);
	printf("%d",sum1(sum1(sum1(number1,number2),number1),number2));

	
//	temp = sum1(number1,number2);
//  temp = sum1(temp,number2);
	//sumOfSixNumbers=sumOfSixNumbers+sum1(number1,number2);
	//printf(" sum of all numbers %d" , sumOfSixNumbers);
}

