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
int main()
{
	float num1,num2,result;
	int option;
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
		printf("\n\tEnter num1 :  ");
		scanf("%f",&num1);
		printf("\n\tEnter num2 :  ");
		scanf("%f",&num2);
		if(option==1)
		{
			result=add(num1,num2);
			printf("\n\tsum : %f",result);
		}
		else if(option==2)
		{
			result=sub(num1,num2);
			printf("\n\tsubtract : %f",result);
		}
		else if(option==3)
		{
			result=multiply(num1,num2);
			printf("\n\tmultiply : %f",result);
		}
		else if(option==4)
		{
			result=divide(num1,num2);
			printf("\n\tdivide : %f",result);
		}
		else
		{
			printf("\n\tno option...");
		}
	}
}

