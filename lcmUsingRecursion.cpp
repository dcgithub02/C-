#include<stdio.h>
lcmOfTwoNumbers(int number1, int number2,int max)
{
	static int max;
	if(number1==0 || number2==0)
	{  return;
	
	}
	 
	max=number1>number2?number1:number2;
	{
		if(max%number1==0 && max%number2==0)
		{
			break;
		}
		lcm=max;
		
                  lcmOfTwoNumbers(number1,number2,max++); 
				  printf("HCF of number1 and number2  %d %d is %d",number1,number2,lcm);    
	}
}
main()
{
	int number1,number2,lcm,max;
	
	
}
