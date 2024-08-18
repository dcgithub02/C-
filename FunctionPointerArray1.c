#include<stdio.h>
float add(float num1,float num2)
{
	float result;
	result = num1+num2;
	return result;
 } 
 float multiply(float num1,float num2)
 {
 	float result;
 	result=num1*num2;
 	return result;
 }float divide(float num1,float num2)
 {
 	float result;
 	result=(num1)/(num2);
 	return result;
 }
 float subtract(float num1,float num2)
 {
 	float result;
 	result=num1-num2;
 	return result;
 }
 float (*ptrArray[4])(float,float);
 int main()
 {
 	float num1,num2,result;
 	int option;
 	ptrArray[0]=add;
 	ptrArray[1]=multiply;
 	ptrArray[2]=divide;
 	ptrArray[3]=subtract;
 	
	 while(1)
	 {
	 	printf("\nSelect option: \n\
		 		1.Add\n\
		 		2.Multiple\n\
				3.Divide\n\
				4.Subtract\n\
				5.Exit");
		printf("\n\tEnter your option : ");
		scanf("%d",&option);
		if(option==5)
		{
			break;
		}
		if(option>=1&&option<=4)
		{
			printf("\nEnter num1 ");
			scanf("%f",&num1);
			printf("\nEnter num2 ");
			scanf("%f",&num2);
			result=	ptrArray[option-1](num1,num2);
			printf("\n result is : %f",result);
		}
		else
		{
			printf("\n\t invalid option...Please select valid option ");
		}
	 }
 }
