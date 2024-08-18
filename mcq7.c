#include<stdio.h>
int main()
{
	function(3,4,5);
	return 0;
}                
void function(int num1,int num2,int num3)
{
	if(num1<=0) return;
	function(num1-1,num2,num3+num1);
	printf(" %d %d %d ",num1,num2,num3); 
	function(num1-1,num3,num2+num1);
	}             



