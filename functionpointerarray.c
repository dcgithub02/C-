#include<stdio.h>
float add(float num1,float num2)
{
	float result;
	result=num1+num2;
	return(result);
}
float sub(float num1,float num2)
{
	float result;
	result=num1-num2;
	return(result);
}
float divide(float num1,float num2)
{
	float result;
	result=num1/num2;
	return(result);
}
float multiply(float num1,float num2)
{
	float result;
	result=num1*num2;
	return(result);
}
float (*ptrToFunArray[4])(float,float); 
int main()
{
	float num1,num2,result;
	int option;
	ptrToFunArray[0]=add;
	ptrToFunArray[1]=sub;
	ptrToFunArray[2]=multiply;
	ptrToFunArray[3]=divide;
	while(1)
	{
		printf("\n\t1.Add");
		printf("\n\t2.Subtract");
		printf("\n\t3.Multiply");
		printf("\n\t4.Divide");
		printf("\n\t5.Exit");
		printf("\n\tYour option : ");
		scanf("%d",&option);
		if(option==5)break;
		if(option>=1 && option<=4)
		{	
			printf("\n\tEnter num1 :  ");
			scanf("%f",&num1);
			printf("\n\tEnter num2 :  ");
			scanf("%f",&num2);
			result = ptrToFunArray[option-1](num1,num2);
			printf("\n\tresult : %f",result);
		}
		else
		{
			printf("\n\tInvalid option...");
		}
	}
}

