#include<stdio.h>
#include<conio.h>
void add(int* ptr1, int* ptr2)
{
	int temp=0;
	temp=*ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	
}

int main()
{
	int number1=30;
	int number2=15;
	printf("numbers before swapping %d %d", number1,number2);
	add(&number1,&number2);
	printf("numbers before swapping %d %d", number1,number2);
}
