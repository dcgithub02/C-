#include<stdio.h>
#include<conio.h>
#inlcude<iostream>
#include<math.h>
int main()
{
	char number[2]="14";
	int num;
	int offset;
	for(offset=0;number[offset]!='\0';offset++)
	{
		num=num+number[offset]+48;
	}
	printf("%d",num);
}
