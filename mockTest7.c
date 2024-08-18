#include<stdio.h>
#include<math.h>
void function1(int num1,int num2,int num3)
{
	if(num1<=0)return;
	function1(num1-1,num2,num3+num1);
	printf(" %d %d %d ",num1,num2,num3);
	function1(num1-1,num3,num2+num1);
}

int main()
{
 function1(3,4,5);
 return 0;	
}
