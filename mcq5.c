#include<stdio.h>
double function(double num)
{
	if(abs(num*num-3)<0.01) 
	{
	
	printf("%f", num);
	return num;
    }
	else 
	{
	printf("%f",function(num/2+1.5/num));
	return function(num/2+1.5/num);
}
}
int main()
{
	double num=3.0;
	function(num);

}
