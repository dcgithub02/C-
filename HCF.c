#include<stdio.h>
#include<conio.h>
int main()
{
	int number=0,number1=0,divisor=2,hcf=1;
	printf("\n\t Enter Number ");
	scanf("%d", &number);
	printf("\n\t Enter Number ");
	scanf("%d",&number1);
	while(number!=1 || number1!=1)
	{
		if(number%divisor==0)
		{ 			if(number1%divisor==0)
			{
				number=number/divisor;
				number1=number1/divisor;
				hcf=hcf*divisor;
			}
			else number=number/divisor;
        }
		else (number1%divisor==0)?number1=number1/divisor:divisor++;
   }
    printf("\n\t HCF of numbers is %d ",hcf);	
  
}

	
