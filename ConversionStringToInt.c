#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	char number[2]="14";
	int num;
	int offset;
	for(offset=0;number[offset]!='\0';offset++)
	{
		num=num*10+number[offset]-48;
	}
	printf("%d",num);
}
