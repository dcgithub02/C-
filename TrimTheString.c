#include<stdio.h>
void trim(char *source)
{
	char *target;
	int offset,length,flag,index=0;
	for(length=0;source[length]!='\0';length++);
	target= calloc(length+1,sizeof(int));
	for(offset=0;source[offset]!='\0';offset++)
	{
		if(source[offset]!=' ')target[index++]=source[offset];
	}
	target[offset]='\0';
	for(offset=0;target[offset]!='\0';offset++)
	{
		printf("%c",target[offset]);
	}
}
int main()
{  

    char source[20]= "  Deepak chh  ";
    trim(source);
}
