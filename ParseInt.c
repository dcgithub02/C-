#include<stdio.h>
#include<stdlib.h>
char * input(char *number)
{   char ch;
    char *number1= calloc(10,sizeof(char));
	int offset;
	printf(number);
	while(1)
	{
		ch=fgetc(stdin);
		if(ch=='\n')
		{
			number1[offset]='\0';
			return number1;
		}
		number1[offset]=ch;
		offset++;
	}
}
int parseInt(char *number)
{   int num=0;
	int length,offset;
	for(offset=0;number[offset]!='\0';offset++)
	{
		if(number[offset]>47 && number[offset]<58)
		{
			num=num*10+number[offset]-48;
			
		}
		else
		{
		 
		printf("Please enter valid number between 0 to 9");
		break;
     	}
	}
	return num;
}
int main()
{
	char *number1;
	int result;
    number1=input("enter number :");
   // printf("%s",number1);
    result=	parseInt(number1);
    printf("%d",result);
}
