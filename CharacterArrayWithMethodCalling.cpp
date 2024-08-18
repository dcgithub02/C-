#include<iostream>
void passString(char  *name)
{
	int offset;
	for(offset=0;name[offset]!='\0';offset++)
	{
		printf(" %c",name[offset]);
	}
		name[3]='p';
}
int main()
{   char name[10]="algorithm";
	passString(name+2);

	printf("\n\t %s",name);
	
}
