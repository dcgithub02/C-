#include<stdio.h>
#include<stdlib.h>
int main()
{
	char * number;
	int num=14343,count=0;
	int num1=num;
	int rem;
	int offset=0;	
	while(num1>0)
	{
		num1=num1/10;
		count++;
	}
	offset=count-1;
		
	number=calloc(count,sizeof(char));
		while(num>0)
		{
		    rem=num%10;
		    
			number[offset]=rem+48;
			num=num/10;
			offset--;
		}
		   number[count]='\0';
        	printf("\n %s",number);
}
