#include<stdio.h>
char * input(char *number)
{   char ch;
    char *number1= calloc(30,sizeof(char));
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
char *sum(char * number1,char *number2)
{    
    int offset,lengthOfNumber1,lengthOfNumber2,offset1;
    char * tempVar;
    tempVar=calloc(30,sizeof(char));
    for(lengthOfNumber1=0;number1[lengthOfNumber1]!='\0';lengthOfNumber1++);
    for(lengthOfNumber2=0;number2[lengthOfNumber2]!='\0';lengthOfNumber2++);
    if(lengthOfNumber1>lengthOfNumber2)
    {
	
    for(offset=0;number1[offset]!='\0';offset++)
    {
		tempVar[offset]=number1[offset]-48+number2[offset]-48;
        }
	}
  }
  	return tempVar;
}

int main()
{
	char *number1;
	char *number2;
	char *number3;
	
	number1=input("enter number :");
	number2=input("enter number :");
	number3=sum(number1,number2);
	printf("%s",number3);
}
