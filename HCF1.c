#include<stdio.h>
#include<conio.h>
int main()
{
	int number,number1,temp;
	printf("\n\t Enter Number ");
	scanf("%d", &number);
	printf("\n\t Enter Number ");
	scanf("%d",&number1);
	if(number<number1)
	{
		temp=number1;
		number1=number;
		number=temp;	
	}
	while(number%number1!=0)
	{  
	    temp=number%number1;
		number=number1;
		number1=temp;
	}	
	printf("HCF is %d",number1);
}

