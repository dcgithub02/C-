#include<iostream>
void passString(char name[])
{
	int offset;
	for(offset=0;name[offset]!='\0';offset++)
	{
		printf("%c",name[offset]);
	}
}
int main()
{
	passString("Algorithm");
}
