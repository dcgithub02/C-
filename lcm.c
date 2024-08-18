#include<stdio.h>
int main()
{
	int number1,number2,count,lcm,gcd;
	printf("Enter number1");
	scanf("%d",&number1);
	printf("Enter number2");
	scanf("%d",&number2);
	for(count=2;count<number1 && count<number2;count++)
	{
	if(number1%count==0 && number2%count==0)
	{
		gcd=count;
	}
	else
	{
		lcm= number1*number2/gcd;
		
		 } 	
	}
	
	printf("LCM is %d",lcm);
}
