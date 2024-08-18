#include<stdio.h>
//a=b=c=d
char * copy(char * target, char * source)
{
	
	int offset,length;
	for(length=0;source[length]!='\0';length++);
	target= calloc(length,sizeof(int));
	for(offset=0;source[offset]!='\0';offset++)
	{
		target[offset]=source[offset];
	}
	target[offset+1]='\0';
	return target;
}
int main()

{
    char * target3;
    char * target2;
    char * target1;
    char source[6]="deepak";
    target1=copy(target1,source);
    target2=copy(target2,target1);
    target3=copy(target3,target2);
	printf("%s",target3);
}
