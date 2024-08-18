#include<conio.h>
#include<stdio.h>
int hcf(int number1,int number2);
int main()
{
	int number1, number2;
	printf("\n\t Enter the numbers");
	scanf("%d %d",number1,number2);
	printf("hcf of %d and %d is %d",number1,number2,hcf(number1,number1%number2));
	
}	
int hcf(int number1,number2)
{
	if(number2!=0) return hcf(number2,number1%number2);
	else return number1;
	
}

