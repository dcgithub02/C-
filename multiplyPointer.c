#include<stdio.h>
float multiply(float number1,float number2)
{
	float result;
result=	number1*number2;
return result;
}
float (*ptrMul)(float,float);

int main()
{
	float res;
	ptrMul=multiply;
	res=ptrMul(5,4);
	printf("\n %f",res);
}

