#include<stdio.h>
#include<stdlib.h>
//remove     extra  spaces
char* removeExtraSpace(char *name)
{
	char *target;
	int offset,index=0,length,count=0;
	for(length=0;name[length]!='\0';length++);
	target=calloc(length+1,sizeof(char));
	for(offset=0;name[offset]!='\0';offset++)
	{
		if(name[offset]==' ')
		{
		
		if(count==0)
		{
			target[index++]=' ';
			count=1;
		}
	}
		else
		{
			target[index++]=name[offset];
			count=0;
		}
	}
	return(target);
}
int main()
{
	char name[100]="remove                 extra      spaces ";
	char *name1;
	name1=removeExtraSpace(name);
	printf("%s",name1);
}
