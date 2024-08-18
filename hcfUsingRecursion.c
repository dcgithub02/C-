#include<stdio.h>
int findHcf(int number1,int number2);
main()
{
   int number1,number2,hcf;
   printf("Enter number1 ");
   scanf("%d",&number1);
   printf("Enter number2 ");
   scanf("%d",&number2);
   hcf=findHcf(number1,number2);
   printf("\n\thcf : %d",hcf);
}
int findHcf(int number1,int number2)
{
  	int temp;
	if(number1<=0||number2<=0)return -1;
    if(number1<number2)
    {
	    temp=number2;
	    number2=number1;
	    number1=temp;
    }
    if(number1%number2==0)return number2;	
	findHcf(number2,number1%number2);
}
  

