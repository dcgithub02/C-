#include<stdio.h>
main()
{
	int number1,number2,count,max,lcm;
	printf("Enter the value of number1 ");
	scanf("%d",&number1);
	printf("Enter the value of number2 ");
	scanf("%d",&number2);
	max= number1>number2 ? number1:number2;
while(1)
	{
		if(max%number1==0 && max%number2==0)
		{
			break;
		}
		max++;
	}
	 lcm=max;
	 printf(" LCM of numbers %d and % d is %d",number1,number2,lcm);
}
