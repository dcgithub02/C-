#include<stdio.h>
int main()
{
	int num=12,*ptr,**ptr1;
	ptr=&num;
	ptr1=&ptr;
	
	//printf("%u ",&num);
	printf("%u ",ptr);
	printf("%u  ",ptr1);
	printf("%u  ",&ptr1);
	
	printf("%d\t",*ptr1);
	printf("%d\t",*ptr);
	printf("%d\t",**ptr1);
	}
