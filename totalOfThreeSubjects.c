#include<stdio.h>
float addMarks(float maths,float hindi,float science);
int main()
{
	float maths,hindi,science;
	float total;
	printf("\n\tEnter marks of hindi ");
	scanf("%f",&maths);
	printf("\n\tEnter marks of English ");
	scanf("%f",&hindi);
	printf("\n\tEnter marks of Maths ");
	scanf("%f",&science);
	total= addMarks(maths,hindi,science);
	printf("\n\tTotal marks of three subjects is %f ", total);
	printf("\n\tAvg. marks of three subjects is %f ",total/3);
}

float addMarks(float maths,float hindi,float science)
{
		return maths+hindi+science;
} 	
	
