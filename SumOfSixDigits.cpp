#include<stdio.h>
#include<conio.h>

int sum(int numbers[6])
{
	int total=0;
	for(int count=0;count<6;count++)
	{
		total= total + numbers[count];
		
	}
	
	return total;
}

int main()
{
	int arr[6]={1,2,3,4,5,6};
	int sumOfDigit=0;
sumOfDigit = sumOfDigit+sum(arr);
printf("%d",sumOfDigit);
	
}


