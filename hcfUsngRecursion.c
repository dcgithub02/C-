#include<conio.h>
#include<stdio.h>
int hcf(int number1,int number2);
int main()
{
	int number1, number2;
	printf("\n\t Enter Number1 : ");
	scanf("%d",&number1);
	printf("\n\t Enter Number 2 : ");
	scanf("%d",&number2);
	printf("\n\t hcf of %d and %d is %d ",number1,number2,hcf(number1,number2));
}	


int hcf(int number1,int number2)
{
	if(number1>number2)
	{
	
	if(number2!=0) return hcf(number2,number1 % number2); // till remainder is not 0 till that we have to call the function
    
	else return number1;
	
    }
    else 
     {
	if(number1!=0) return hcf(number1,number2 % number1);
    else return number1;
     }
}
