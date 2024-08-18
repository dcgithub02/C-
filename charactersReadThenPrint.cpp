#include<iostream>
int main()
{
	char name[10];
	char ch;
	int offset;
	printf("enter characters ");
	while(1)
	{
		ch= fgetc(stdin);
		if(ch=='\n')
		{
			name[offset]='\0';
			break;
		}
		name[offset]=ch;
		offset++;
	}
	for(offset=0;name[offset]!='\0';offset++)
	{
		printf("%c",name[offset]);
	}
}
