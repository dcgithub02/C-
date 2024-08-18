#include<stdio.h>
#include<conio.h>
void add(int num1, int num2, int* pointer)
{
  	*pointer = num1+num2;
	
}

int main()
{
	int sum=0;
	int num1=5;
	int num2=10;
	add(num1,num2,&sum);
	printf("%d",sum);

}  
