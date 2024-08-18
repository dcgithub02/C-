#include<stdio.h>
int main()
{
	char name[10];
	char ch ;
	int offset=0;
	printf("\n\t enter name : ");
	while(1)
	{
		ch=fgetc(stdin);
		if(ch=='\n')
		{
			name[offset]='\0';
			break;
		}
		name[offset]=ch;
		offset++;
	}
	printf("\n\t name : ");
	for(offset=0;name[offset]!='\0';offset++)
	{
		putch(name[offset]);
	}
}

