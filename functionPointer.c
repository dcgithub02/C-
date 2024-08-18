#include<stdio.h>
float add(float num1,float num2)
{
	float sumOfNumber;
	sumOfNumber=num1+num2;
	return(sumOfNumber);
}
float (*ptrToFunction)(float,float); //pointer to function variable
int main()
{
	float res;
	ptrToFunction=add;
	res = ptrToFunction(12,34);
	printf("\n\tres : %f",res);
	res = (*ptrToFunction)(12,34);
	printf("\n\tres : %f",res);
}


