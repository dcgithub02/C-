#include<stdio.h>
void passString(char const* name)
{
	int offset=0;
	for(offset=0;name[offset]!='\0';offset++)
	{
		printf("%c",name[offset]);
	}
}
int main()
{
	passString("Alogrithm");
}
