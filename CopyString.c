#include<stdio.h>
char* copy(char * name)
{
	
	int offset,length;
	for(length=0;name[length]!='\0';length++);
	char * newName= calloc(length,sizeof(int));
	for(offset=0;name[offset]!='\0';offset++)
	{
		newName[offset]=name[offset];
	}
	return newName;
}
int main()
{
	char name[]="deepak";
	char * newName= copy(name);
	printf("%s",newName);
}
