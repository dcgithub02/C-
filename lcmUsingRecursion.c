#include<stdio.h>
lcmOfTwoNumbers(int number1, int number2)
{
int lcm,max;
	if(number1==0 || number2==0)
	{  return;
	
	}
	 
	    max=number1>number2?number1:number2;
	
		if(max%number1==0 && max%number2==0) lcm=max;
		else 
		{
		max++;
	    lcmOfTwoNumbers(number1,number2); 
	    printf(" LCM is %d", lcm);
              }
}
main()
{
	int number1,number2,lcm,max;
	printf("Enter number1 ");
	scanf("%d",&number1);
	printf("Enter number2");
	scanf("%d",&number2);
	lcmOfTwoNumbers(number1,number2);
	
	
}
