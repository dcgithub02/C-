#include<stdio.h>
int main()
{
char name[20];
char ch;
int offset=0;
printf("\n\t Enter String ");
while(1)
{
	ch=fgetc(stdin);
	if(ch=='\n'|| offset==20)
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
