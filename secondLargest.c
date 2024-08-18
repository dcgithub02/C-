#include<stdio.h>
int main()
{
	int number=0,number1=0,largest=0,second=0,count=0,flag=0;
	printf("enter the number");
	scanf("%d",&number);
	largest=number;
	printf("Enter the second number");
	scanf("%d",&number);
	if(number>largest)
	{
		second=largest;
		largest=number;
	}
	else if(number<largest)
	{
		second=number;
	}
	else if(number==largest)
	{
		flag++;
	}
	
	for(count=0;count<8;count++)
	{
		printf("Enter the number ");
		scanf("%d", &number1);
		if(number1>largest)
		{
			second=largest;
			largest=number1;
		}
		else if(number1<largest)
		{
			if(number1>second)
			{
				second=number1;
			}
		}
		else if(number1==largest)
		{
			flag++;
		}
	}
	if(flag==9)
	{
		
		printf("All entered numbers are equal ", largest);
	}

	else{
	
		printf("\n\tlargest number is %d ",largest);
		printf("\n\tSecond largest number is %d  ",second);
	}

}
